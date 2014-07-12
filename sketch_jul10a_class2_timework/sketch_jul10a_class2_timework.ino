
int btnInput = 2;
int outputLed = 13;
int time;
long prevTime=0;
long delayLed=1000;
int curMil;
int btnPres=0;
int curDir=0;//0 =right/up 1=left/down
void setup(){
  pinMode(btnInput, INPUT_PULLUP);
  pinMode(outputLed, OUTPUT);
  Serial.begin(57600);
}

void loop(){
  Serial.println(btnPres);
  Serial.println("begin loop");  
  if(digitalRead(btnInput) == LOW){
    /*time=millis();
    Serial.println("yes");
    if(curMil){
      Serial.print((curMil-time)/1000);
    }
    digitalWrite(outputLed, HIGH);
    */
    addLoop();
    if(curDir=0){
      btnPres+=1;
    }else{
      btnPres-=1;
    }
  }else{
    Serial.println(btnPres);
    digitalWrite(outputLed, LOW);
  }
  curMil=time;
  Serial.println("loop end"); 
  delay(1000);
}

void addLoop(){
  if(btnPres=4){
    Serial.println("led5");
    curDir=1;
  }else if(btnPres=3){
    Serial.println("led4");
  }else if(btnPres=2){
    Serial.println("led3");
  }else if(btnPres=1){
    Serial.println("led2");
  }else if(btnPres=0){
    Serial.println("led1");
    curDir=0;
  }
}
