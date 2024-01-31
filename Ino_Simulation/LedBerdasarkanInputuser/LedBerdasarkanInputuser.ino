void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  Serial.println("Masukkan Angka : ");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() == 0){}
  int no = Serial.parseInt();
  Serial.println(no);
  if(no > 0){
    digitalWrite(2, 1);
    delay(no * 1000);
    digitalWrite(2,0);
  }
}
