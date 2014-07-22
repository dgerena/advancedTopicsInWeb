/*
 Fade
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

int ledR = 3;
int ledB = 5;
int ledG = 6;// the pin that the LED is attached to
int brightness = 250;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  analogWrite(ledG,255);
  analogWrite(ledB,255);
  analogWrite(ledR,255);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pin 9:
  delay(1000);
  for(int i=0; i < 102; i++){
    analogWrite(ledR, brightness);
    // change the brightness for next time through the loop:
    brightness = brightness + fadeAmount;
  
    // reverse the direction of the fading at the ends of the fade: 
    if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount; 
    }     
    // wait for 30 milliseconds to see the dimming effect    
    delay(30); 
      
  }  
  analogWrite(ledR,255);
  
  for(int i=0; i < 102; i++){
    analogWrite(ledG, brightness);
    // change the brightness for next time through the loop:
    brightness = brightness + fadeAmount;
  
    // reverse the direction of the fading at the ends of the fade: 
    if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount; 
    }     
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);   
    
  }  
  analogWrite(ledG,255);
  
  for(int i=0; i < 102; i++){
    analogWrite(ledB, brightness);
    // change the brightness for next time through the loop:
    brightness = brightness + fadeAmount;
    // reverse the direction of the fading at the ends of the fade: 
    if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount; 
    }     
    // wait for 30 milliseconds to see the dimming effect    
    delay(30); 
  }  
  analogWrite(ledB,255);
  
  float gval=195/102;
  float rval=180/102;
  float bval=0/102;
  
  for(float i=0; i < 102; i++){
    analogWrite(ledR, 255-(rval*i));
    analogWrite(ledG, 255-(gval*i));
    analogWrite(ledB, 255-(bval*i));
//    brightness = brightness + fadeAmount;
//    if (brightness == 0 || brightness == 255) {
//      fadeAmount = -fadeAmount; 
//    }   
    delay(15);
  }
  for(float i=102; i > 0; i--){
    analogWrite(ledR, 255-(rval*i));
    analogWrite(ledG, 255-(gval*i));
    analogWrite(ledB, 255-(bval*i));
//    brightness = brightness + fadeAmount;
//    if (brightness == 0 || brightness == 255) {
//      fadeAmount = -fadeAmount; 
//    }   
    delay(15);
  }
  analogWrite(ledR,255);
  analogWrite(ledB,255);
  analogWrite(ledG,255);
  
//  for(float i=0;i<102;i++){
//    analogWrite(ledR, rval*(i/102));
//    analogWrite(ledG, gval*(i/102));
//    analogWrite(ledB, bval*(i/102));
//    delay(30);
//  } 
//  analogWrite(ledR,255);
//  analogWrite(ledG,255);
//  analogWrite(ledB,255);
  
}

