void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i < 9; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void off(){
  for(int i = 2; i < 9; i++){
    digitalWrite(i, 0);
  }
}

void angka(int no){
  if(no == 1){
    digitalWrite(3, 1);
    digitalWrite(4, 1);
  }
  else if(no == 2){
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(8, 1);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
  }
  else if(no == 3){
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(8, 1);
  }
  else if(no == 4){
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
  }
  else if(no == 5){
    digitalWrite(2, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(4, 1);
    digitalWrite(5, 1);
  }
  else if(no == 6){
    digitalWrite(2, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
  }
  else if(no == 7){
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
  }
  else if(no == 8){
    for(int i = 2; i < 9; i++){
      digitalWrite(i, 1);
    }
  }
  else if(no == 9){
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  off();
  delay(100);
  for(int i = 1; i < 7; i++){
    digitalWrite(13, 1);
    angka(i);
    delay(1000);
    off();
  }
  digitalWrite(13, 0);

  for(int i = 1; i < 3; i++){
    digitalWrite(12, 1);
    angka(i);
    delay(1000);
    off();
  }
  digitalWrite(12, 0);

  for(int i = 1; i < 5; i++){
    digitalWrite(11, 1);
    angka(i);
    delay(1000);
    off();
  }
  digitalWrite(11, 0);
}
