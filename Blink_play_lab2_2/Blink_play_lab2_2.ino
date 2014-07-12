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
int btnpin=2;
int val=100;
int curLed;
int curDir=0;//0 is add or right - 1 is minus or left\

unsigned long time;
long prevTime=0;
long wait=1000;
int curTime;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(btnpin, INPUT_PULLUP);
  Serial.begin(57600);
}

void setLight(int  val1, int val2,int  val3, int val4,int val5){
  digitalWrite(led, val1);
  digitalWrite(led2, val2);
  digitalWrite(led3, val3);
  digitalWrite(led4, val4);
  digitalWrite(led5, val5);
}
// the loop routine runs over and over again forever:
void loop(){
  
  while(digitalRead(btnpin) == HIGH){
    Serial.println(curLed);
    lightLoop();
    curDir=1;
  }
//    if(curDir==1){
//      subLoop();
//      curDir=0;
//    }
}
void lightLoop(){
  time=millis();
  if(time-curTime>wait){
    curTime=time;
    setLight(LOW,LOW,LOW,LOW,HIGH);   // turn the LED on (HIGH is the voltage level)
    curLed=5;
    Serial.println("fucking works...");
  }else if(time-curTime>wait){
    curTime=time;
    setLight(LOW,LOW,LOW,HIGH,LOW);   // turn the LED on (HIGH is the voltage level)
    curLed=4;
  }else if(time-curTime>wait){
    curTime=time;
    setLight(LOW,LOW,HIGH,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
    curLed=3;
  }else if(time-curTime>wait){
    curTime=time;
    setLight(LOW,HIGH,LOW,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
    curLed=2;
  }else if(time-curTime>wait){
    curTime=time;
    setLight(HIGH,LOW,LOW,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
    curLed=1; 
  }else if(time-curTime>wait){
    setLight(LOW,HIGH,LOW,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
    curLed=2;
    delay(150);               // wait for a second
  }else if(time-curTime>wait){
    setLight(LOW,LOW,HIGH,LOW,LOW);   // turn the LED on (HIGH is the voltage level)
    curLed=3;
    delay(150);               // wait for a second
  }else if(time-curTime>wait){
    curTime=time;
    setLight(LOW,LOW,LOW,HIGH,LOW);   // turn the LED on (HIGH is the voltage level)
    curLed=4;
    delay(150);               // wait for a second
  }else if(time-curTime>wait){
    curTime=time;
    setLight(LOW,LOW,LOW,LOW,HIGH);   // turn the LED on (HIGH is the voltage level)
    curLed=5;
    delay(100);               // wait for a second
  }
}


