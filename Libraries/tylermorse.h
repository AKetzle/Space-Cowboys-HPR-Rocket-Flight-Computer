/*
  tylermorse.h - Library for flashing Morse code.
  Created by Tyler, Feb 28th, 2024.
  Not released into the public domain.
*/

#ifndef tylermorse_h
#define tylermorse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void begin();
    void dot();
    void dash();
  private:
    int _pin;
};

#endif