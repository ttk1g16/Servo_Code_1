

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int opentime = 500; // Opens quickly deposits M&M then closes
int closetime= 5000; // Servo will be closed for this amount of time e.g 5 seconds
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 90; pos += 90) { // goes from 0 degrees to 90 degrees
    // in steps of 90 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(opentime);                       // waits delaytime for the servo to reach the position
  }
  
    myservo.write(0);              // 
    delay(closetime);                       //Servo will be closed for this amount of time  
  }


