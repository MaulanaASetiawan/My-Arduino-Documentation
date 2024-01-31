#include <Servo.h>

Servo servo;
int pos = 90;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  servo.attach(2);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(pos);
  if(digitalRead(13) == HIGH){
    servo.write(pos+=2);
    delay(200);
  }

  if(digitalRead(12) == HIGH){
    servo.write(pos-=2);
    delay(200);
  }
}
