/**
 * FujiNet Configuration Program
 */

#include <atari.h>
#include <stdbool.h>
#include <string.h>
#include <peekpoke.h>
#include "screen.h"
#include <stdio.h>
#include <conio.h>

/**
 * Setup the config screen
 */


void main(void)
{
  OS.noclik=0xFF;
  OS.shflok=0;
  OS.color0=0x9f;
  OS.color1=0x0f;
  OS.color2=0x90;
  OS.color4=0x90;
  OS.coldst=1;
  OS.sdmctl=0; // Turn off screen
  OS.sdmctl=34;
  screen_init();
  screen_clear();
  set_cursor(0,10);
  screen_puts(0,0, "This is a string");
  while (1) {}

  
}
