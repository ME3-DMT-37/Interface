#include <genieArduino.h>
#include <Bounce2.h>
#include "Interface.h"

#define BUTTON_UP A4
#define BUTTON_DOWN A7
#define BUTTON_LEFT A3
#define BUTTON_RIGHT A6
#define BUTTON_ENTER A5

#define DISPLAY_RESET 2

Bounce up = Bounce();
Bounce down = Bounce();
Bounce left = Bounce();
Bounce right = Bounce();
Bounce enter = Bounce();

bool string_tuned[] = {true, true, true, true, true, true}; //flags for Controller code to start tuning

Interface interface;

void setup() {

  //USB Serial setup
  Serial.begin(9600);

  //Display Serial Setup
  Serial1.begin(9600);

  genie.Begin(Serial1);

  //Setting up Teensy pins
  pinMode(BUTTON_UP, INPUT);
  pinMode(BUTTON_DOWN, INPUT);
  pinMode(BUTTON_LEFT, INPUT);
  pinMode(BUTTON_RIGHT, INPUT);
  pinMode(BUTTON_ENTER, INPUT);
  pinMode(DISPLAY_RESET, OUTPUT);

  //allowing each button to be debounced
  //setting debounce interval to 5 ms (default is 10 ms)
  up.attach(BUTTON_UP);
  up.interval(5);
  down.attach(BUTTON_DOWN);
  down.interval(5);
  right.attach(BUTTON_RIGHT);
  right.interval(5);
  left.attach(BUTTON_LEFT);
  left.interval(5);
  enter.attach(BUTTON_ENTER);
  enter.interval(5);

  // reset display by toggling reset line
  digitalWrite(DISPLAY_RESET, LOW);
  delay(1000);
  digitalWrite(DISPLAY_RESET, HIGH);

}

void loop() {

//  genie.DoEvents();
//  // put your main code here, to run repeatedly:
//
//  if (screen == MAIN_MENU) { //main menu
//    menuhighlight();  // returns values of "select" between 1 to 4.
//    menuchoice();     // uses returned values of "select" to determine value of "screen", and default "select" value for this screen.
//  }
//
//  if (screen == CONFIRM_ARRANGEMENT) { //confirm arrangement
//    confirmhighlight(); // returns values of "select" of 0 & 5.
//    confirmchoice();    // uses returned values of "select" to determine value of "screen" and default "select" value for this screen.
//  }
//
//  if (screen == SETTINGS) {
//    settingshighlight();
//    settingschoice();
//  }
//
//  if (screen == POWER_OFF) { //power off
//    poweroff(); //displays splash screen, use enter button to return to main menu.
//  }
//
//  if (screen == MAKE_ARRANGEMENT) {  //make new arrangement (UNFINISHED!!!!!!!!!!!!!!!!!!!!!!!!!!!!)
//    newarrangehighlight();
//  }
//
//  if (screen == ATTACH_DEVICE) { //attach device
//    attachhighlight();
//    attachchoice();
//  }
//
//  if (screen == CHOOSE_STRING) { //choose string
//    selectstrhighlight();
//    selectstrchoice(); //Can return string number.
//    //Set flag here for tuning.
//
//  }
//
//  if (screen == PLUCK_STRING) { //displays request to pluck previously selected string/ next string
//    if (up.update()) { //simulates the plucking of string. Have tuning code send a flag to denote "Tuning"
//      if (up.read()) {
//        genie.WriteObject(GENIE_OBJ_FORM, 7, 0);
//        screen = WAIT_SCREEN;
//      }
//    }
//    if (enter.update()) { //cancel process
//      if (enter.read()) {
//        genie.WriteObject(GENIE_OBJ_FORM, select, 0); //returns to choose string screen
//        screen = select;
//      }
//    }
//  }
//
//  if (screen == WAIT_SCREEN) { //wait screen
//    if (up.update()) { //if tuning code throws up flag denoting successful tuning
//      if (up.read()) {
//        selectnewstring();
//      }
//    }
//
//    if (down.update()) {
//      if (down.read()) {
//        genie.WriteObject(GENIE_OBJ_FORM, 6, 0); //returns user to pluck string screen,
//        screen = PLUCK_STRING;
//      }
//    }
//
//    if (enter.update()) { //user manually cancels process
//      if (enter.read()) {
//        screen = select;
//        genie.WriteObject(GENIE_OBJ_FORM, screen, 0); //returns to choose string screen
//      }
//    }
//  }
//
//  if (screen == COMPLETELY_TUNED) { //Guitar is fully tuned
//    //Confirming the arrangement chosen. By default, the tick button is highlighted as select = 5 (see menuchoice(), if (Screen==1))
//    fullytuneselect();
//    fullytuneconfirm();
//  }
//
//  if (screen == CHOOSE_HEADSTOCK) {
//    headstockhighlight(); //highlights different headstock types
//    headstockchoice();    //returns back to main menu
//  }
}
