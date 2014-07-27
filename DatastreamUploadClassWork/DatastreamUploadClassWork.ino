#include <SPI.h>
#include <Ethernet.h>
#include <HttpClient.h>
#include <Xively.h>

// MAC address for your Ethernet shield
byte mac[] = { 0xDE, 0xAA, 0xBE, 0xEF, 0xFE, 0xED };
// Your Xively key to let you upload data
char xivelyKey[] = "RtvEv4aIc9qiDgjCOF5GuN1x75nJkkkrnr9eeEwoUGYRkZlh";
// Analog pin which we're monitoring (0 and 1 are used by the Ethernet shield)
int sensorPin = 3;
int pirState=HIGH;
int inputPin=3;
int val=0;
// Define the strings for our datastream IDs
char sensorId[] = "sensor_reading1";
XivelyDatastream datastreams[] = {
  XivelyDatastream(sensorId, strlen(sensorId), DATASTREAM_FLOAT),
};
// Finally, wrap the datastreams into a feed
XivelyFeed feed(544049360, datastreams, 1 /* number of datastreams */);
EthernetClient client;
XivelyClient xivelyclient(client);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting single datastream upload to Xively...");
  Serial.println();
  pinMode(inputPin,INPUT);
  while (Ethernet.begin(mac) != 1)
  {
    Serial.println("Error getting IP address via DHCP, trying again...");
    delay(15000);
  }
}
void loop() {
  if(digitalRead(inputPin) == HIGH){
    val= 1;
  }else{
    val=0;
  }
  Serial.print("sensor reads ");
  Serial.println(val);
  
  int sensorValue = digitalRead(val);
  datastreams[0].setFloat(sensorValue);
  Serial.print("Read sensor value ");
//  Serial.println(datastreams[0].getInt());
  Serial.println("Uploading it to Xively");
  int ret = xivelyclient.put(feed, xivelyKey);
  Serial.print("xivelyclient.put returned ");
  Serial.println(ret);
  Serial.println();
  delay(5000);
}
