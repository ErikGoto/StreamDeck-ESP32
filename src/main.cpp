#include <Arduino.h>
#include "Nextion.h"
#include "keyboardControl.h"

keyboardControl keyboard;

NexPicture vs = NexPicture(0, 2, "p1");
NexPicture lol = NexPicture(0, 3, "p2");
NexPicture disc = NexPicture(0, 4, "p3");

NexTouch *nex_listen_list[] =
    {
        &vs,
        &lol,
        &disc,
};

void vsPushCallback(void *ptr)
{
  keyboard.vsCode();
}

void lolPushCallback(void *ptr)
{
  keyboard.lol();
}

void discPushCallback(void *ptr)
{
  keyboard.discord();
}

void setup()
{
  nexInit();
  vs.attachPush(vsPushCallback);
  lol.attachPush(lolPushCallback);
  disc.attachPush(discPushCallback);

  pinMode(2, OUTPUT);
  pinMode(5, INPUT_PULLUP);
}

void loop()
{
  nexLoop(nex_listen_list);
  if (digitalRead(5) == LOW)
  {
    keyboard.lol();
    digitalWrite(2, HIGH);
    delay(200);
  }
}