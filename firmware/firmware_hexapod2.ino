#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41); 

struct Leg {
  Adafruit_PWMServoDriver* drv;
  int coxa, femur, tibia;
};
Leg legs[6];

int angleToPulse(int angle) {
  return map(angle, 0, 180, 150, 600);
}

void sweepCoxaTogether(int target2, int target4, int target6, int targetTibia6 = -1) {
  static int last2 = 90, last4 = 90, last6 = 90, lastTibia6 = 130;
  int steps = 12;
  int delayMs = 30;
  for (int i = 0; i <= steps; i++) {
    int angle2 = last2 + (target2 - last2) * i / steps;
    int angle4 = last4 + (target4 - last4) * i / steps;
    int angle6 = last6 + (target6 - last6) * i / steps;
    legs[1].drv->setPWM(legs[1].coxa, 0, angleToPulse(angle2));
    legs[3].drv->setPWM(legs[3].coxa, 0, angleToPulse(angle4));
    legs[5].drv->setPWM(legs[5].coxa, 0, angleToPulse(angle6));

    if (targetTibia6 != -1) {
      int angleTibia6 = lastTibia6 + (targetTibia6 - lastTibia6) * i / steps;
      legs[5].drv->setPWM(legs[5].tibia, 0, angleToPulse(angleTibia6));
    }

    delay(delayMs);
  }
  last2 = target2; last4 = target4; last6 = target6;
  if (targetTibia6 != -1) lastTibia6 = targetTibia6;
}

void setFemurTibia(Leg &L, int femur, int tibia) {
  L.drv->setPWM(L.femur, 0, angleToPulse(femur));
  L.drv->setPWM(L.tibia, 0, angleToPulse(tibia));
}

void setup() {
  pwm1.begin(); pwm1.setPWMFreq(60);
  pwm2.begin(); pwm2.setPWMFreq(60);

  legs[0] = {&pwm1,0,1,2};  
  legs[1] = {&pwm1,3,4,5};  
  legs[2] = {&pwm1,6,7,8}; 
  legs[3] = {&pwm2,0,1,2};
  legs[4] = {&pwm2,3,4,5}; 
  legs[5] = {&pwm2,6,7,8}; 
}

void loop() {
  setFemurTibia(legs[0],130,130);
  setFemurTibia(legs[2],130,130);
  setFemurTibia(legs[4],130,130);
  
  legs[2].drv->setPWM(legs[2].coxa, 0, angleToPulse(90));
  legs[4].drv->setPWM(legs[4].coxa, 0, angleToPulse(90));

  setFemurTibia(legs[1],175,90);
  setFemurTibia(legs[3],175,90);
  setFemurTibia(legs[5],175,90);
  delay(500);

  sweepCoxaTogether(30,140,90); 
  delay(500);

  setFemurTibia(legs[1],130,130);
  setFemurTibia(legs[3],130,130);
  setFemurTibia(legs[5],130,130);
  delay(1000);

  setFemurTibia(legs[0],175,90);
  setFemurTibia(legs[2],175,90);
  setFemurTibia(legs[4],175,90);
  delay(1000);

  sweepCoxaTogether(90,90,90,110); 
  delay(1000);

  setFemurTibia(legs[0],130,130);
  setFemurTibia(legs[2],130,130);
  setFemurTibia(legs[4],130,130);

  legs[2].drv->setPWM(legs[2].coxa, 0, angleToPulse(90));
  legs[4].drv->setPWM(legs[4].coxa, 0, angleToPulse(90));
  delay(1500);

  setFemurTibia(legs[1],175,90);
  setFemurTibia(legs[3],175,90);
  setFemurTibia(legs[5],175,90);
  delay(1000);
}
