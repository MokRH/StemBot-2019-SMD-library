#define OLED
#include "StemBot2019.h"
#include "bluetooth.h"

/*
   INSTRUCTIONS Setup
   bot_setup(IR sensor calibration time in seconds);
   rename_bt("name as u like (max 10 char)", yes/no display on OLED screen);
   alignment(reduce left speed, reduce right speed, inverted left, inverted right, test);
   LED(green, yellow, red);
*/

void setup() {
  bot_setup(0);
  bt_setup();
  rename_bt("StemBot", 0);
  alignment(0, 0, 0, 0, 0);
  LED(1, 0, 1);
  KP = 0.15, KI = 0, KD = 5;
}
/*
   INSTRUCTIONS loop
   BT_receiver(yes/no display character received from BT);
*/

void loop() {
  if (BT_receiver(0) == 'F') {
    forward(200, 200);
  }
  if (BT_receiver(0) == 'S') {
    Stop();
  }
  if (BT_receiver(0) == 'w') {
    forward(200, 200);
  }
  else if (BT_receiver(0) == 's') {
    backward(100, 100);
  }
  else if (BT_receiver(0) == 'a') {
    turnLeft(100, 100);
  }
  else if (BT_receiver(0) == 'd') {
    turnRight(100, 100);
  }
  else if (BT_receiver(0) == 'q') {
    forward(0, 200);
  }
  else if (BT_receiver(0) == 'e') {
    forward(200, 0);
  }
  else if (BT_receiver(0) == 'z') {
    backward(0, 100);
  }
  else if (BT_receiver(0) == 'c') {
    backward(100, 0);
  }
  else if (BT_receiver(0) == 'S') {
    Stop();
  }
}
