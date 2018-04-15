#include "board.h"

void boardMove(char A[][9])
{
  char str[5];
  char sym[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
  char num[] = {'1', '2', '3', '4', '5', '6', '7', '8'};
  int i, j, d, f;
  while(1)
  {
    scanf("%s", str);
    if(strcmp(str, "exit") == 0) break;
    for(int m = 0; m < 8; m++)
    {
      if(str[0] == sym[m])
        j = m;
      if(str[1] == num[m])
        i = 7 - m;
      if(str[3] == sym[m])
        d = m;
      if(str[4] == num[m])
        f = 7 - m;
    }
    if(!(j < 8 && j >= 0 && i < 8 && i >= 0 && d < 8 && d >= 0 && f < 8 && f >= 0))
      printf("\nERROR\n");
    else {j = 10; i = 10; d = 10; f = 10;}
  }
}
