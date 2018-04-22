#include "board.h"

void boardCreate(char A[][9])
{
  FILE *f = fopen("/home/realtura/chessviz/table.txt", "rt");
  int i = 0, j = 0;
  for(i = 0; i < 9; i++)
    for(j = 0; j < 9; j++)
      fscanf(f, "%c", &A[j][i]);
}
