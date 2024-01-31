int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  int btn1 = digitalRead(13);
  int btn2 = digitalRead(12);
  int btn3 = digitalRead(11);
  int btn4 = digitalRead(10);

  if(btn1 == HIGH){
    if(count == 2){
      count -= 2;
    }
    else{
      count+=1;
    }
    Serial.println(count);
    while(digitalRead(13) == HIGH){
      delay(50);
    }
  }

  else if(btn2 == HIGH){
    count+=2;
    Serial.println(count);
    while(digitalRead(12) == HIGH){
      delay(50);
    }
  }

  else if(btn3 == HIGH){
    count+=3;
    Serial.println(count);
    while(digitalRead(11) == HIGH){
      delay(50);
    }
  }
  else if(btn4 == HIGH){
    count = 0;
    Serial.println(count);
    while(digitalRead(10) == HIGH){
      delay(50);
    }
  }
  

  if(count == 7){
    digitalWrite(2, 1);
    digitalWrite(3, 1);
  }
  else if(count == 6){
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
  }
  else if(count == 4){
    digitalWrite(4, 1);
  }
  else{
    if(count <= 3 || count == 5 || count > 7){
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    }
  }
}
