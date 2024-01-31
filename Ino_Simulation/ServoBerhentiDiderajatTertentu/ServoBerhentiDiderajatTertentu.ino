#include <Servo.h>
Servo servo;
int pos = 0;
void setup() {
  // put your setup code here, to run once:
  servo.attach(2);
  pinMode(5, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 180; i++) {
    servo.write(i);
    delay(10);

    if (i == 140) {
      digitalWrite(5, HIGH);
      delay(3000);
      digitalWrite(5, LOW);

    }
  }
}
