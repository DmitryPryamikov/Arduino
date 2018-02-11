#include <Servo.h>
//опора
Servo base_Servo;
//хвататель
Servo hvatatel;
int servo_position=0;
//
void setup() {
  // put your setup code here, to run once:
  //опора
  base_Servo.attach(10);
  //хвататель
  hvatatel.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (servo_position=0; servo_position<=180;servo_position+=1)
  {
    base_Servo.write(servo_position);
    delay(100);
  }
  //
  for (servo_position=70; servo_position<=100;servo_position+=1)
  {
    hvatatel.write(servo_position);
    delay(100);
    
  }
  
  for (servo_position=180; servo_position>=0;servo_position-=1)
  {
    base_Servo.write(servo_position);
    delay(100);
  }
  //
   for (servo_position=100; servo_position>=70;servo_position-=1)
  {
  hvatatel.write(servo_position);
   delay(100);
  }

}
