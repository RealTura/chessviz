#include "board.h"

int main()
{
  char A[9][9];
  char str[7];
  boardCreate(A);
  boardPrint(A);
  while(true)
  {
	scanf("%s", str);
	if(strcmp(str, "exit") == 0) break; 
	if(!boardMove(A, str)) printf("ERROR\n");
  }
  return 0;
}
