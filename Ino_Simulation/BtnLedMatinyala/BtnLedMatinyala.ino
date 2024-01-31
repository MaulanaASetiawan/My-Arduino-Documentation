int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn = digitalRead(13);
  if(btn == HIGH){
    count++;
    while(digitalRead(13) == HIGH){
      delay(50);
    }
  }

  if(count == 1){
    digitalWrite(2, 1);
  }else{
    digitalWrite(2, 0);
    count = 0;
  }
}
