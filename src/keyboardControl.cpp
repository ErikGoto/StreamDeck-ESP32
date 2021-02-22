#include "Arduino.h"
#include "keyboardControl.h"

BleKeyboard bleKeyboard;

keyboardControl::keyboardControl()
{
    bleKeyboard.begin();
}

void keyboardControl::vsCode()
{
    bleKeyboard.press(KEY_LEFT_CTRL);
    bleKeyboard.press(KEY_LEFT_ALT);
    bleKeyboard.print("v");

    bleKeyboard.releaseAll();
}

void keyboardControl::lol()
{
    bleKeyboard.press(KEY_LEFT_CTRL);
    bleKeyboard.press(KEY_LEFT_ALT);
    bleKeyboard.print("l");

    bleKeyboard.releaseAll();
}
void keyboardControl::discord()
{
    bleKeyboard.press(KEY_LEFT_CTRL);
    bleKeyboard.press(KEY_LEFT_ALT);
    bleKeyboard.print("d");

    bleKeyboard.releaseAll();
}