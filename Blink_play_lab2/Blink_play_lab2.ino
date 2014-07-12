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
int curLed=1;

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
  lights();
}

void lights(){
  if(curLed = 1){
    setLight(HIGH,LOW,LOW,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
    delay(val);
  }else if(curLed =2) {
    setLight(LOW,HIGH,LOW,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
    delay(val);               // wait for a second
  }else if(curLed =3){
    setLight(LOW,LOW,HIGH,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
    delay(val); 
  }else if(curLed=4){
    setLight(LOW,LOW,LOW,HIGH,LOW);   // turn the LED on (HIGH is the voltage level)
    delay(val);  // wait for a second
  }else if(curLed=5){
    setLight(LOW,LOW,LOW,LOW,HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(val);               // wait for a second
  }
  curLed+=1;
}
//global current led.

