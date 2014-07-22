#include <Tone.h>;
Tone tone1;

const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 3; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  tone1.begin(3);
}

void loop() {
//  // read the analog in value:
//  sensorValue = analogRead(analogInPin);            
//  // map it to the range of the analog out:
//  outputValue = map(sensorValue, 900, 1000, 0, 8);  
//  // change the analog out value:
//  analogWrite(analogOutPin, outputValue);           

  tone1.play(660,100);
  delay(85);tone1.play(660,100);
  delay(150);tone1.play(660,100);
  delay(150);tone1.play(510,100);
  delay(50);tone1.play(660,100);
  delay(150);tone1.play(770,100);
  delay(275);tone1.play(380,100);
  delay(287);tone1.play(510,100);
  delay(225);tone1.play(380,100);
  delay(200);tone1.play(320,100);
  delay(250);tone1.play(440,100);
  delay(150);tone1.play(480,80);
  delay(165);tone1.play(450,100);
  delay(75);tone1.play(430,100);
  delay(150);tone1.play(380,100);
  delay(100);tone1.play(660,80);
  delay(100);tone1.play(760,50);
  delay(75);tone1.play(860,100);
  delay(150);tone1.play(700,80);
  delay(75);tone1.play(760,50);
  delay(175);tone1.play(660,80);
  delay(150);tone1.play(520,80);
  delay(75);tone1.play(580,80);
  delay(75);tone1.play(480,80);
  delay(175);tone1.play(510,100);
  delay(275);tone1.play(380,100);
  delay(200);tone1.play(320,100);
  delay(250);tone1.play(440,100);
  delay(150);tone1.play(480,80);
  delay(165);tone1.play(450,100);
  delay(75);tone1.play(430,100);
  delay(150);tone1.play(380,100);
  delay(100);tone1.play(660,80);
  delay(100);tone1.play(760,50);
  delay(75);tone1.play(860,100);
  delay(150);tone1.play(700,80);
  delay(75);tone1.play(760,50);
  delay(175);tone1.play(660,80);
  delay(150);tone1.play(520,80);
  delay(75);tone1.play(580,80);
  delay(75);tone1.play(480,80);
  delay(250);tone1.play(500,100);
  delay(150);tone1.play(760,100);
  delay(50);tone1.play(720,100);
  delay(75);tone1.play(680,100);
  delay(75);tone1.play(620,150);
  delay(150);tone1.play(650,150);
  delay(150);tone1.play(380,100);
  delay(75);tone1.play(430,100);
  delay(75);tone1.play(500,100);
  delay(150);tone1.play(430,100);
  delay(75);tone1.play(500,100);
  delay(50);tone1.play(570,100);
  delay(110);tone1.play(500,100);
  delay(150);tone1.play(760,100);
  delay(50);tone1.play(720,100);
  delay(75);tone1.play(680,100);
  delay(75);tone1.play(620,150);
  delay(150);tone1.play(650,200);
  delay(150);tone1.play(1020,80);
  delay(150);tone1.play(1020,80);
  delay(75);tone1.play(1020,80);
  delay(150);tone1.play(380,100);
  delay(150);tone1.play(500,100);
  delay(150);tone1.play(760,100);
  delay(50);tone1.play(720,100);
  delay(75);tone1.play(680,100);
  delay(75);tone1.play(620,150);
  delay(150);tone1.play(650,150);
  delay(150);tone1.play(380,100);
  delay(75);tone1.play(430,100);
  delay(75);tone1.play(500,100);
  delay(150);tone1.play(430,100);
  delay(75);tone1.play(500,100);
  delay(50);tone1.play(570,100);
  delay(110);tone1.play(500,100);
  delay(150);tone1.play(760,100);
  delay(50);tone1.play(720,100);
  delay(75);tone1.play(680,100);
  delay(75);tone1.play(620,150);
  delay(150);tone1.play(650,200);
  delay(150);tone1.play(1020,80);
  delay(150);tone1.play(1020,80);
  delay(75);tone1.play(1020,80);
  delay(150);tone1.play(380,100);
  delay(150);tone1.play(500,100);
  delay(150);tone1.play(760,100);
  delay(50);tone1.play(720,100);
  delay(75);tone1.play(680,100);
  delay(75);tone1.play(620,150);
  delay(150);tone1.play(650,150);
  delay(150);tone1.play(380,100);
  delay(75);tone1.play(430,100);
  delay(75);tone1.play(500,100);
  delay(150);tone1.play(430,100);
  delay(75);tone1.play(500,100);
  delay(50);tone1.play(570,100);
  delay(210);tone1.play(585,100);
  delay(275);tone1.play(550,100);
  delay(210);tone1.play(500,100);
  delay(180);tone1.play(380,100);
  delay(150);tone1.play(500,100);
  delay(150);tone1.play(500,100);
  delay(75);tone1.play(500,100);
  delay(150);tone1.play(500,60);
  delay(75);tone1.play(500,80);
  delay(150);tone1.play(500,60);
  delay(175);tone1.play(500,80);
  delay(75);tone1.play(580,80);
  delay(175);tone1.play(660,80);
  delay(75);tone1.play(500,80);
  delay(150);tone1.play(430,80);
  delay(75);tone1.play(380,80);
  delay(300);tone1.play(500,60);
  delay(75);tone1.play(500,80);
  delay(150);tone1.play(500,60);
  delay(175);tone1.play(500,80);
  delay(75);tone1.play(580,80);
  delay(75);tone1.play(660,80);
  delay(225);tone1.play(870,80);
  delay(162);tone1.play(760,80);
  delay(300);tone1.play(500,60);
  delay(75);tone1.play(500,80);
  delay(150);tone1.play(500,60);
  delay(175);tone1.play(500,80);
  delay(75);tone1.play(580,80);
  delay(175);tone1.play(660,80);
  delay(75);tone1.play(500,80);
  delay(150);tone1.play(430,80);
  delay(75);tone1.play(380,80);
  delay(300);tone1.play(660,100);
  delay(75);tone1.play(660,100);
  delay(150);tone1.play(660,100);
  delay(150);tone1.play(510,100);
  delay(50);tone1.play(660,100);
  delay(150);tone1.play(770,100);
  delay(225);tone1.play(380,100);
  //tells the user it is over and delays it a little before going to the top again
  delay(1000);
  tone1.play(440,200);
  delay(200);
  delay(200);
  tone1.play(440,400);
  delay(200);
  delay(200);
  delay(5000);



  // print the results to the serial monitor:
  Serial.print("sensor = " );                       
  Serial.print(sensorValue);      
  Serial.print("\t output = ");      
  Serial.println(outputValue);   

  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(20);                     
}
