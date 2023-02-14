#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);// put your setup code here, to run once:
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("d:");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("type nul>Digispark.txt");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("start notepad \"Digispark.txt\"");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("I_am_everywhere");
  
}

void loop() {
  

}
