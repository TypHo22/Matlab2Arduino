#include <Servo.h>

Servo myservo;  // create servo object to control a servo



void setup() {
 Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(0); 
}

void loop() 
{
  
  if(Serial.available() > 0)
  {
    int servoSet = Serial.read();
    if(servoSet >= 0 && servoSet <= 180)
    {
       myservo.write(servoSet);         
      delay(15);
    }
    Serial.println(servoSet);
  }


}
