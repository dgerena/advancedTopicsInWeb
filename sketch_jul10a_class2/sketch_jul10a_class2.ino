
int btnInput = 2;
int outputLed = 13;
int time;
int oneTime;
int secSinceLast;
void setup(){
  pinMode(btnInput, INPUT_PULLUP);
  pinMode(outputLed, OUTPUT);
  Serial.begin(57600);
}

void loop(){   
  if(digitalRead(btnInput) == LOW){
    time=millis();
    secSinceLast = time - oneTime;
    Serial.println(secSinceLast);
    digitalWrite(outputLed, HIGH);
  }else{
    Serial.println('0');
    digitalWrite(outputLed, LOW);
  }
  oneTime=time; 
  delay(100);
}
