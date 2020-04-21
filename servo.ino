#include <Servo.h>
  Servo servo1;

void setup() {
  servo1.attach(11);

  int giro_servo1(int grado_giro){
    servo1.write(grado_giro);
    return 1;
  }
}

void loop() {
  giro_servo1(90);
  delay(1000);
  giro_servo1(180);
  delay(1000);
  giro_servo1(90);
  delay(1000);
  giro_servo1(0);
  delay(1000);
}
