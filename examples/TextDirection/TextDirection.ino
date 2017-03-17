 /*!
  * file TextDirection.ino
  * brief TextDirection.
  * @n [Get the module here](等上架后添加商品购买链接)
  * @n This example Set the volume size and play music snippet.
  * @n [Connection and Diagram](等上架后添加wiki链接)
  *
  * Copyright	[DFRobot](http://www.dfrobot.com), 2016
  * Copyright	GNU Lesser General Public License
  *
  * @author [yangyang](971326313@qq.com)
  * version  V1.0
  * date  2017-2-10
  */

#include <Wire.h>
#include "DFRobot_RGBLCD.h"

int thisChar = 'a';

DFRobot_RGBLCD lcd(16,2);  //16 characters and 2 lines of show

void setup() {
    // initialize
    lcd.init();
    // turn on the cursor:
    lcd.cursor();
}

void loop() {
    // reverse directions at 'm':
    if (thisChar == 'm') {
        // go right for the next letter
        lcd.rightToLeft();
    }
    // reverse again at 's':
    if (thisChar == 's') {
        // go left for the next letter
        lcd.leftToRight();
    }
    // reset at 'z':
    if (thisChar > 'z') {
        // go to (0,0):
        lcd.home();
        // start again at 0
        thisChar = 'a';
    }
    // print the character
    lcd.write(thisChar);
    // wait a second:
    delay(1000);
    // increment the letter:
    thisChar++;
}

