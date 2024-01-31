void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  Serial.println("Masukkan Angka ganjil / genap");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){}
  int no = Serial.parseInt();
  Serial.println(no);
  if(no > 0){
    if(no % 2 == 0){
      Serial.println("Genap");
      while(Serial.available() == 1){
        digitalWrite(3, 1);
        digitalWrite(2, 1);
        delay(100);
      }
    }
    else if(no % 2 != 0){
      Serial.println("Ganjil");
      while(Serial.available() == 1){
        digitalWrite(2, 1);
        digitalWrite(3, 0);
        delay(100);
      }
    }
  }
  else{
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    Serial.println("No tidak valid");
  }
}
