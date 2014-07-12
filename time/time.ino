int led = 13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;
int btnpin=2;
int val=100;
int curLed;
int curDir=0;//0 is add or right - 1 is minus or left\

int time;
long prevTime=0;
long delayLed=1000;
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


void loop() {

}

