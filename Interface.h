#ifndef Interface_h
#define Interface_h

#include <genieArduino.h>

#define MAIN_MENU 0
#define CONFIRM_ARRANGEMENT 1
#define SETTINGS 2
#define POWER_OFF 3
#define MAKE_ARRANGEMENT 4
#define ATTACH_DEVICE 5
#define CHOOSE_STRING 6
#define PLUCK_STRING 7
#define WAIT_SCREEN 8
#define COMPLETELY_TUNED 9
#define CHOOSE_HEADSTOCK 10

Genie genie;

class Interface {

  public:
    Interface();
    void menuhighlight();
    void menuchoice();
    void confirmhighlight();
    void confirmchoice();
    void settingshighlight();
    void settingschoice();
    void poweroff();
    void newarrangehighlight();
    void attachhighlight();
    void attachchoice();
    void selectstrhighlight();
    void selectstrchoice();
    void headstockhighlight();
    void headstockchoice();
    void selectnewstring();
    void allstringsfunc();
    void fullytuneselect();
    void fullytuneconfirm();
  private:
  
    int string = 0;
    int screen = 0; //default screen is "Main menu"
    int select = 1; //default selection is "confirm arrangement"
    
    int stringindex = 6;
    int oldstring = 1;
    int oldstringindex = 0;
    int level = 2;
    int tunecounter = 0;
    int tunecounterindex = 0;
    int allstrings = 1;
    int tunedstrings[6] = {0, 0, 0, 0, 0, 0};
    int sum = 0;
    int calibrate = 0;
};

#endif
