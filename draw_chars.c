#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    for (char row = 0; row < 7; row++) {
      unsigned short rowBits = font_5x7[c][col];
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}

void print_char_8x12(char c)
{
  c -= 0x20;
  for (char row = 0; row < 12; row++) { //row and column switched, these letters are vertical
    for (char col = 0; col < 8; col++) {
      unsigned short rowBits = font_8x12[c][row];
      unsigned short colMask = 1 << (8 - col);
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
