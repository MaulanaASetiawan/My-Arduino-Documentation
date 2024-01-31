#include <Servo.h>
Servo servo;
int pos = 0;
void setup() {
  // put your setup code here, to run once:
  for(int i = 13; i > 6; i--){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
  servo.attach(2);
  Serial.println("Masukkan Angka");
}

void off(){
  for(int i = 13; i > 6; i--){
    digitalWrite(i, 0);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  off();
  servo.write(pos);
  while(Serial.available() == 0){}
  int pass = Serial.parseInt();
  Serial.println(pass);
  if(pass == 1){
    while(Serial.available() == 1){
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      pos = 10;
      servo.write(pos);
      delay(200);
    }
  }
  else if(pass == 2){
    while(Serial.available() == 1){
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(13, 1);
      digitalWrite(11, 1);
      digitalWrite(10, 1);
      pos = 20;
      servo.write(pos);
      delay(200);
    }
  }
  else if(pass == 3){
    while(Serial.available() == 1){
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      digitalWrite(13, 1);
      pos = 30;
      servo.write(pos);
      delay(200);
    }
  }
  else if(pass == 4){
    while(Serial.available() == 1){
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      pos = 40;
      servo.write(pos);
      delay(200);
    }
  }
  else if(pass == 5){
    while(Serial.available() == 1){
      digitalWrite(7, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      pos = 50;
      servo.write(pos);
      delay(200);
    }
  }
  else if(pass == 6){
    while(Serial.available() == 1){
      digitalWrite(7, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      digitalWrite(11, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      pos = 60;
      servo.write(pos);
      delay(200);
    }
  }
  else if(pass == 7){
    while(Serial.available() == 1){
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      pos = 70;
      servo.write(pos);
      delay(200);
    }
  }
  else if(pass == 8){
    while(Serial.available() == 1){
      for(int i = 13; i > 6; i--){
        digitalWrite(i, 1);
      }
      pos = 80;
      servo.write(pos);
      delay(200);
    }
  }
  else if(pass == 9){
    while(Serial.available() == 1){
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      pos = 90;
      servo.write(pos);
      delay(200);
    }
  }
  else {
    Serial.println("Tidak ada angka");
    pos = pos;
  }
}
