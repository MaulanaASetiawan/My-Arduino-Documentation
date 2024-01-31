#include <Servo.h>
Servo servo;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(2);
  Serial.begin(9600);
  Serial.println("Masukkan Angka 0 - 180 : ");
}

void loop() {
  servo.write(pos);
  // put your main code here, to run repeatedly:
  while(Serial.available() == 0){}
  int no = Serial.parseInt();
  if(no >= 0 && no <= 180){
    while(Serial.available()==1){
      pos = no;
      servo.write(pos);
      delay(200);
    }
  }
  else{
    while(Serial.available() == 1){
      Serial.println("Diluar Jangkauan");
      pos = pos;
    }
  }
}
