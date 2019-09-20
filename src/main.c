/**
 * PLATOTERM for Atari Cartridges
 *
 * Author: Thomas Cherryhomes <thom.cherryhomes at gmail dot com>
 *
 * Main entrypoint
 */

#include <stdbool.h>
#include <stdint.h>
#include "screen.h"
#include "touch.h"
#include "terminal.h"
#include "io.h"
#include "keyboard.h"

uint8_t running=true;

void main(void)
{
  screen_init();
  touch_init();
  terminal_init();
  screen_splash();
  io_init();
  screen_beep();

  while (running==true)
    {
      io_main();
      keyboard_main();
      touch_main();
    }

  io_done();
  screen_done();
  touch_done();
  
}
