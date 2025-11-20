#include <DigiMouse.h>

void setup() {
  // Initialize mouse functionality
  DigiMouse.begin();
  delay(2000); // Give computer time to recognize device
}

void loop() {
  // Generate random mouse movements (larger range for more noticeable movement)
  int xMovement = random(-15, 16); // Random X movement between -15 and 15
  int yMovement = random(-15, 16); // Random Y movement between -15 and 15
  
  // Sometimes make bigger movements for more noticeable effect
  if (random(0, 4) == 0) { // 25% chance of bigger movement
    xMovement = random(-30, 31);
    yMovement = random(-30, 31);
  }
  
  // Apply the movement
  DigiMouse.moveX(xMovement);
  DigiMouse.moveY(yMovement);
  
  // Random delay between movements (5 to 45 seconds)
  int delayTime = random(5000, 45000); // 5-45 seconds in milliseconds
  DigiMouse.delay(delayTime);
}