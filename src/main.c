#include "board.h"

int main()
{
  char A[9][9];
  boardCreate(A);
  boardPrint(A);
  boardMove(A);
  return 0;
}
