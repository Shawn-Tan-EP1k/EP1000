
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int IRSensor = 2; // connect ir sensor to arduino pin 2
int LED = 13; // conect Led to arduino pin 13

void setup()
{
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  myservo.attach(9);
 
}

void loop() 
{
  
  
    
    int statusSensor = digitalRead (IRSensor);
  
    if (statusSensor == 0)
    {
      for (pos = 55
      ; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
      for (pos = 0; pos <= 55; pos += 1) { // goes from 0 degrees to 180 degrees
        // in steps of 1 degree
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                    // waits 15ms for the servo to reach the position
      }
    }
  
    else
    {
      
    }
}
