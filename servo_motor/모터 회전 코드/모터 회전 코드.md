#include <Servo.h>
Servo servo;
int value = 0;
int i = 0;

void setup(){
  servo.attach(7);
}
void loop(){
  
  for(i = 0; i < 180; i++)
  {
    servo.write(i);
    delay(30);
  }
}
