int count = 0;
const int btn1 = 13;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void redup(int pin) {
  for (int i = 0; i <= 255; i++) {
    analogWrite(pin, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(pin, i);
    delay(10);
  }
}

void loop() {
  int btn = digitalRead(btn1);
  
  if (btn == HIGH) {
    count++;
    while (digitalRead(btn1) == HIGH) {
      delay(50);
    }
  }
  Serial.println(count);


  if (count == 1) {
    redup(5);
  } else if (count == 2) {
    redup(3);
  } else {
    count = 0;
    redup(6);
  }
}