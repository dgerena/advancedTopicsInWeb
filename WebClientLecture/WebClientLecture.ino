#include <SPI.h>
#include <Ethernet.h>


byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
char server[] = "http://dgerena.github.io";
IPAddress ip(192,168,0,177);
EthernetClient client;
String reportString;
int led = 13;

void setup() {
 // Open serial communications and wait for port to open:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
   while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }

  // start the Ethernet connection:
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Failed to configure Ethernet using DHCP");
    // no point in carrying on, so do nothing forevermore:
    // try to congifure using IP address instead of DHCP:
//    Ethernet.begin(mac, ip);
 Serial.println("hi this is the debug mesage");
  }
  // give the Ethernet shield a second to initialize:
  delay(1000);
  Serial.println("connecting...");

  // if you get a connection, report back via serial:
  if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    client.println("GET /advancedTopicsInWeb/lightoff/lightoff.html");
    client.println("Host: dgerena.github.io");
    client.println("Connection: close");
    client.println();
  } 
  else {
    // kf you didn't get a connection to the server:
    Serial.println("connection failed");
  }
  
}

void loop()
{
  // if there are incoming bytes available 
  // from the server, read them and print them:
  if (client.available()) {
    char c = client.read();
    Serial.print(c);
    reportString += c;
    int spacePosition = reportString.indexOf("\r");
    /*if(reportString.charAt(spacePosition+1) == 13) {
       Serial.println("You might have found the 0.");
    }*/
    
    if(c == '\n' && client.peek() == 13) {
      //Serial.println(client.peek());
      
      client.read();
      client.read();
      char w = client.read();
      if(w == '0'){
        Serial.print("And the lord said let there be light! ");
        digitalWrite(led,HIGH);
        Serial.println(w);
      }else{
       digitalWrite(led,HIGH);
       Serial.println("You have failed to light the bulb.");
      }
    }
  }

  // if the server's disconnected, stop the client:
  if (!client.connected()) {
    Serial.println();
    Serial.println("disconnecting.");
    client.stop();

    // do nothing forevermore:
    while(true);
  }
}

