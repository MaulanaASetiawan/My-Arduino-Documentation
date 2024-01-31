int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  for(int i = 2; i < 9; i++){
    pinMode(i, OUTPUT);
  }
}

void off(){
  for(int i = 2; i < 9; i++){
    digitalWrite(i, 0);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  off();
  int btn = digitalRead(13);
  if(btn == HIGH){
    count++;
    while(digitalRead(13) == HIGH){
      delay(50);
    }
  }
  
  if(count == 1){
    for(int i = 2; i < 8; i++){
      digitalWrite(i, 1);
      delay(100);
      digitalWrite(i, 0);
    }
  }
  else if(count == 2){
    for(int i = 7; i > 1; i--){
        digitalWrite(i, 1);
        delay(100);
        digitalWrite(i, 1);
        digitalWrite(i, 0);
    }
  }
  else{
      off();
      count = 1;
  }
}
