/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;
int potpin=0;
int val=0;
int curLed;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}

void setLight(int  val1, int val2,int  val3, int val4,int val5){
  digitalWrite(led, val1);
  digitalWrite(led2, val2);
  digitalWrite(led3, val3);
  digitalWrite(led4, val4);
  digitalWrite(led5, val5);
}
// the loop routine runs over and over again forever:
void loop() {
  val=analogRead(potpin);
  setLight(HIGH,LOW,LOW,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
  curLed=1;
  delay(val);               // wait for a second
  setLight(LOW,HIGH,LOW,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
  curLed=2;
  delay(val);               // wait for a second
  setLight(LOW,LOW,HIGH,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
  curLed=3;
  delay(val);               // wait for a second
  setLight(LOW,LOW,LOW,HIGH,LOW);   // turn the LED on (HIGH is the voltage level)
  curLed=4;
  delay(val);               // wait for a second
  setLight(LOW,LOW,LOW,LOW,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(val);               // wait for a second
  setLight(LOW,LOW,LOW,HIGH,LOW);   // turn the LED on (HIGH is the voltage level)
  delay(val);               // wait for a second
  setLight(LOW,LOW,HIGH,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
  delay(val);               // wait for a second
  setLight(LOW,HIGH,LOW,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
  delay(val);               // wait for a second
}


