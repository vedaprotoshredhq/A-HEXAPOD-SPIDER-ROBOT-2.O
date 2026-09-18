#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver(0x40); 
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);

#define SERVOMIN  150  // Min pulse length out of 4096
#define SERVOMAX  600  // Max pulse length out of 4096

int angleToPulse(int angle) {
  return map(angle, 0, 180, SERVOMIN, SERVOMAX);
}

void setup() {
  Wire.begin();

  pwm1.begin();
  pwm1.setPWMFreq(50);

  pwm2.begin();
  pwm2.setPWMFreq(50);

  delay(10);

  int pulse90 = angleToPulse(90);

  for (int ch = 0; ch <= 8; ch++) {
    pwm1.setPWM(ch, 0, pulse90);
  }
  
  for (int ch = 0; ch <= 8; ch++) {
    pwm2.setPWM(ch, 0, pulse90);
  }
}

void loop() {
  // Nothing needed — PCA9685 keeps PWM signals active
}
