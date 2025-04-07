
#include <Servo.h>

Servo horizontal;
Servo vertical;

int servoh = 180;
int servohLimitHigh = 180;
int servohLimitLow = 65;
int servov = 45;
int servovLimitHigh = 80;
int servovLimitLow = 15;

int ldrlt = A0; // Top-left
int ldrrt = A1; // Top-right
int ldrld = A2; // Bottom-left
int ldrrd = A3; // Bottom-right

void setup() {
  Serial.begin(9600);
  horizontal.attach(9);
  vertical.attach(10);
  horizontal.write(servoh);
  vertical.write(servov);
  delay(3000);
}

void loop() {
  int lt = analogRead(ldrlt);
  int rt = analogRead(ldrrt);
  int ld = analogRead(ldrld);
  int rd = analogRead(ldrrd);

  int avt = (lt + rt) / 2;
  int avd = (ld + rd) / 2;
  int avl = (lt + ld) / 2;
  int avr = (rt + rd) / 2;

  if (avt > avd) {
    servov++;
    if (servov > servovLimitHigh) servov = servovLimitHigh;
  } else if (avt < avd) {
    servov--;
    if (servov < servovLimitLow) servov = servovLimitLow;
  }
  vertical.write(servov);

  if (avl > avr) {
    servoh--;
    if (servoh < servohLimitLow) servoh = servohLimitLow;
  } else if (avl < avr) {
    servoh++;
    if (servoh > servohLimitHigh) servoh = servohLimitHigh;
  }
  horizontal.write(servoh);

  delay(100);
}
