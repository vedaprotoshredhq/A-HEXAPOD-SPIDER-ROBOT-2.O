#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// Two PCA9685 boards on I2C
Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver(0x40); // First board
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41); // Second board

// Servo pulse range (adjust for your servo model)
#define SERVOMIN  150  // Min pulse length out of 4096
#define SERVOMAX  600  // Max pulse length out of 4096

// Convert angle (0–180) to pulse length
int angleToPulse(int angle) {
  return map(angle, 0, 180, SERVOMIN, SERVOMAX);
}

void setup() {
  Wire.begin();

  pwm1.begin();
  pwm1.setPWMFreq(50); // Standard servo frequency ~50 Hz

  pwm2.begin();
  pwm2.setPWMFreq(50);

  delay(10);

  // Set all servos to 90°
  int pulse90 = angleToPulse(90);

  // First PCA9685: channels 0–8
  for (int ch = 0; ch <= 8; ch++) {
    pwm1.setPWM(ch, 0, pulse90);
  }

  // Second PCA9685: channels 0–8
  for (int ch = 0; ch <= 8; ch++) {
    pwm2.setPWM(ch, 0, pulse90);
  }
}

void loop() {
  // Nothing needed — PCA9685 keeps PWM signals active
}
