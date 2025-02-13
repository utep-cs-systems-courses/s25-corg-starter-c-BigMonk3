#include <stdio.h>
#include <stdlib.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow with specified stem length (stemSize) starting from leftCol.
void print_arrow(int leftCol, int stemSize) 
{
  int row, col;
  for (row = 0; row <= 7; row++) {
    char x = (row <= 2 || row > 5) ? ' ' : '*';
    for (int i = 0; i < leftCol; i++) putchar(' ');
    for (col = 0; col <= stemSize; col++) putchar(x);
    for (int i = 0; i < abs(4 * (row / 4) - row % 4); i++) putchar('*');
    putchar('\n');
  }
}
