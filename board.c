#include "board.h"

void boardPrint(char A[][9])
{
  for(int i = 0; i < 9; i++)
  {
    for(int j = 0; j < 9; j++)
      printf("%c ", A[i][j]);
    printf("\n"); 
  }
}

