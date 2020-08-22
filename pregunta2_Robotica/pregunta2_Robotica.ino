#include <Servo.h>

Servo servo_1;
Servo servo_2;

int potenciometro_1 = 0;
int potenciometro_2 = 0;
int valor_potenciometro_1;
int valor_potenciometro_2;

void setup() {
  servo_1.attach(9);
  servo_2.attach(6);
}

void loop() {
  
  valor_potenciometro_1 = analogRead(potenciometro_1);
  valor_potenciometro_2 = analogRead(potenciometro_2);
  
  valor_potenciometro_1 = map(valor_potenciometro_1, 0, 1023, 0, 180);
  valor_potenciometro_2 = map(valor_potenciometro_2, 0, 1023, 0, 360);
  
  servo_1.write(valor_potenciometro_1);
  servo_2.write(valor_potenciometro_2);
  
  delay(10);

}
