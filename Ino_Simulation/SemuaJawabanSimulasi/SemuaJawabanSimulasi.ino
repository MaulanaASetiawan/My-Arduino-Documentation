/*
----- SOAL SIMULASI ----- 
*/

//-------- SOAL NO 1 --------//

// void setup(){
//   for(int i = 2; i < 9; i++){
//     pinMode(i, OUTPUT);
//   }
//   for(int i = 13; i > 10; i--){
//     pinMode(i , OUTPUT);
//   }
// }

// void angka(int no){
//   if(no == 1){
//     digitalWrite(3, 1);
//     digitalWrite(4, 1);
//   }
//   else if(no == 2){
//     digitalWrite(2, 1);
//     digitalWrite(3, 1);
//     digitalWrite(8, 1);
//     digitalWrite(6, 1);
//     digitalWrite(5, 1);
//   }
//   else if(no == 3){
//     digitalWrite(2, 1);
//     digitalWrite(3, 1);
//     digitalWrite(4, 1);
//     digitalWrite(5, 1);
//     digitalWrite(8, 1);
//   }
//   else if(no == 4){
//     digitalWrite(3, 1);
//     digitalWrite(4, 1);
//     digitalWrite(8, 1);
//     digitalWrite(7, 1);
//   }
//   else if(no == 5){
//     digitalWrite(2, 1);
//     digitalWrite(7, 1);
//     digitalWrite(8, 1);
//     digitalWrite(4, 1);
//     digitalWrite(5, 1);
//   }
//   else if(no == 6){
//     digitalWrite(2, 1);
//     digitalWrite(7, 1);
//     digitalWrite(8, 1);
//     digitalWrite(4, 1);
//     digitalWrite(5, 1);
//     digitalWrite(6, 1); 
//   }
// }

// void off(){
//   for(int i = 2; i < 9; i++){
//     digitalWrite(i, 0);
//   }
// }

// void loop(){

//   off();
//   for(int i = 1; i < 7; i++){
//     angka(i);
//     digitalWrite(13, 1);
//     delay(1000);
//     off();
//   }
//   digitalWrite(13, 0);
//   for(int i = 1; i < 3; i++){
//     angka(i);
//     digitalWrite(12, 1);
//     delay(1000);
//     off();
//   }
//   digitalWrite(12, 0);
//   for(int i = 1; i < 5; i++){
//     angka(i);
//     digitalWrite(11, 1);
//     delay(1000);
//     off();
//   }
//   digitalWrite(11, 0);
// }


//-------- SOAL NO 2 --------//

#include <Servo.h>
Servo servo;
int pos = 0;

// void setup() {
//   // put your setup code here, to run once:
//   servo.attach(2);
//   Serial.begin(9600);
//   Serial.println("Masukkan Angka 0-180");
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   servo.write(pos);
//   while(Serial.available()==0){}
//   int no = Serial.parseInt();
//   if(no >= 0 && no <=180){
//     while(Serial.available()==1){
//       pos = no;
//       servo.write(pos);
//     }
//   }
//   else{
//     Serial.println("Diluar rentang");
//     pos = pos;
//     servo.write(pos);
//   }
// }


//-------- SOAL NO 3 --------//

// int count = 0;
// void setup(){
//   pinMode(2, INPUT);
//   pinMode(3, OUTPUT);
// }


// void loop(){
//   digitalWrite(3, 0);
//   int btn = digitalRead(2);
//   if(btn == HIGH){
//     count++;
//     while(digitalRead(2) == HIGH){
//       delay(50);
//     }
//   }

//   if(count == 1){
//     digitalWrite(3, 1);
//   }
//   else{
//     digitalWrite(3, 0);
//     count = 0;
//   }
// }


//-------- SOAL NO 4 --------//

// void setup(){
//   pinMode(2, OUTPUT);
//   Serial.begin(9600);
//   Serial.println("Masukkan Angka : ");
// }

// void loop(){
//   digitalWrite(2, 0);
//   while(Serial.available()==0){}
//   int no = Serial.parseInt();
//   if(no > 0){
//     Serial.println(no);
//     digitalWrite(2, 1);
//     delay(no*1000);
//     digitalWrite(2, 0);
//   }
//   else {
//     digitalWrite(2, 0);
//     Serial.println("Tidak bisa");
//   }
// }


//-------- SOAL NO 5 --------//

// void setup(){
//   servo.attach(2);
//   pinMode(3, OUTPUT);
//   pinMode(4, OUTPUT);
// }

// void loop(){
//   servo.write(pos);
//   if(pos == 0){
//     pos = 180;
//     servo.write(pos);
//     digitalWrite(3,1);
//     delay(1000);
//     digitalWrite(3, 0);
//   }
//   else if(pos == 180){
//     pos = 0;
//     servo.write(pos);
//     digitalWrite(4, 1);
//     delay(1000);
//     digitalWrite(4, 0);
//   }
// }


//-------- SOAL NO 6 --------//

// void setup(){
//   pinMode(2, OUTPUT);
//   pinMode(3, OUTPUT);
//   Serial.begin(9600);
//   Serial.println("Angka : ");
// }

// void loop(){
//   digitalWrite(2, 0);
//   digitalWrite(3, 0);

//   while(Serial.available()==0){}
//   int no = Serial.parseInt();
//   if(no % 2 == 0){
//     Serial.println(no);
//     while(Serial.available() == 1){
//       digitalWrite(3, 0);
//       digitalWrite(2, 1);
//     }
//   }
//   else if(no % 2 != 0){
//     Serial.println(no);
//     while(Serial.available() == 1){
//       digitalWrite(3, 1);
//       digitalWrite(3, 0);
//     }
//   }
//   else {
//     Serial.println("Tidak ada");
//   }
// }