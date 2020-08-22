#include <Servo.h>

Servo servo_1;
Servo servo_2;

void setup() {
  servo_1.attach(9);
  servo_2.attach(10);
}

void loop() {
  
  servo_1.write(0);
  servo_2.write(0);

  for (int i = 0; i <= 180; i++){
    servo_1.write(i);
    servo_2.write(180-i);
    delay(1000);
  }

  delay(500);
}
