#include <Servo.h>
//опора
Servo base_Servo;
//хвататель
Servo hvatatel;
int servo_position=0;
//подключаем порты
void setup() {
  // put your setup code here, to run once:
  //опора к 10
  base_Servo.attach(10);
  //хвататель к 13
  hvatatel.attach(13);
}

void loop() {
  // поворачиваем платформу на 180 град
  for (servo_position=0; servo_position<=180;servo_position+=1)
  {
    base_Servo.write(servo_position);
    //задержка на 0,1 сек
    delay(100);
  }
  //Захватываем деталь
  for (servo_position=70; servo_position<=100;servo_position+=1)
  {
    hvatatel.write(servo_position);
    //задержка на 0,1 сек
    delay(100);
    
  }
  //разворачиваем платформу
  for (servo_position=180; servo_position>=0;servo_position-=1)
  {
    base_Servo.write(servo_position);
    delay(100);
  }
  // отпускаем деталь
   for (servo_position=100; servo_position>=70;servo_position-=1)
  {
  hvatatel.write(servo_position);
   delay(100);
  }

}
