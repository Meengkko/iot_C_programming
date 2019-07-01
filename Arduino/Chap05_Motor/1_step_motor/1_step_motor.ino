#include <Stepper.h>
#define STEPS 400

Stepper stepper(STEPS, 3, 4, 5, 6);

void setup() {
  
}

void loop() {
  stepper.setSpeed(30);
  stepper.step(400);
}
