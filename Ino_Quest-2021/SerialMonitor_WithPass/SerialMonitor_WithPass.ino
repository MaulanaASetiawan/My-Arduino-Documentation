int batas = 0;

void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 9; i++) {
    pinMode(i, OUTPUT);
  }
  // pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  Serial.println("Masukkan Password Anda : ");
}

void off() {
  for (int i = 2; i < 9; i++) {
    digitalWrite(i, LOW);
  }
}

void ledOff() {
  for (int i = 13; i > 10; i--) {
    digitalWrite(i, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  off();
  while (Serial.available() == 0) {}
  int pass = Serial.parseInt();
  Serial.println(pass);
  if (pass == 123) {
    Serial.println("Password Benar");
    while (Serial.available() == 1) {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      ledOff();
      delay(1000);
      batas = 0;
    }
  } else {
    Serial.println("Password Salah");
    while (Serial.available() == 1) {}
    batas++;
    if (batas == 1) {
      digitalWrite(13, HIGH);
      delay(250);
    } else if (batas == 2) {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      delay(250);
    } else if (batas == 3) {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      delay(250);
      for (int j = 0; j < 6; j++) {
        for (int i = 1; i < 8; i++) {
          digitalWrite(i, LOW);
          delay(100);
          digitalWrite(i, HIGH);
        }
      }
    } else {
      off();
      ledOff();
      batas = 0;
    }
  }
}