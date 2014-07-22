

void setup(){
  
  pinMode(A0,INPUT);
 pinMode (3, OUTPUT);
 Serial.begin(57600);
}

void loop(){
  int val =analogRead(A0);
  
  Serial.print("A0= ");
  Serial.println(val);
  
  int mappedVal=map(val,0,1023,0,255);
  
  analogWrite(3,mappedVal);
  delay(250);
}
