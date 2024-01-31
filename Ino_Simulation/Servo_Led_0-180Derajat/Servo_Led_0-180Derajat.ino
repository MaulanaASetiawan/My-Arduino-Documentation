#include <Servo.h>
Servo servo;
int pos = 0;

void setup() {
//   // put your setup code here, to run once:
  servo.attach(4);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
//   // put your main code here, to run repeatedly:
  servo.write(pos);
  if(pos == 0){
    pos = 180;
    servo.write(pos);
    digitalWrite(2, 1);
    digitalWrite(3,0);
    delay(1000);
  }
  if(pos == 180){
    pos = 0;
    servo.write(pos);
    digitalWrite(3,1);
    digitalWrite(2,0);
    delay(1000);
  }
}
