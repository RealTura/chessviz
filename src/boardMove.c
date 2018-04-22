#include "board.h"
#include <stdbool.h>

bool isEmpty(char a)
{
	if(a == ' ')
		return true;
	else return false;
}

void boardMove(char A[][9])
{
  FILE *f = fopen("/home/realtura/chessviz/table1.txt", "wt");
  char str[7];
  char temp;
  char sym[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
  char num[] = {'1', '2', '3', '4', '5', '6', '7', '8'};
  int i, j, d, y;
  while(1)
  {
    scanf("%s", str);
    if(strcmp(str, "exit") == 0) break;
    fprintf(f, "%s\n", str);
    if((int)str[0] >= 97 && (int)str[0] <= 104)
    {
	    for(int m = 0; m < 8; m++)
	    {
	      if(str[0] == sym[m])
			  j = 1 + m;
	      if(str[1] == num[m])
	        i = 7 - m;
	      if(str[3] == sym[m])
	        d = 1 + m;
	      if(str[4] == num[m])
	        y = 7 - m;
	    }
	    if(!(j < 8 && j >= 0 && i < 8 && i >= 0 && d < 8 && d >= 0 && y < 8 && y >= 0))
	      printf("\nERROR\n");
	    else if((isEmpty(A[y][d]) && str[2] != '-') || (!(isEmpty(A[y][d])) &&
				str[2] != 'x') || (A[i][j] != 'P' && A[i][j] != 'p'))

			printf("\nERROR\n");

	    else
		{
			if(str[2] == 'x')
			{
				A[y][d] = A[i][j];
				A[i][j] = ' ';
			}
			else
			{
				temp = A[i][j];
			    A[i][j] = A[y][d];
			    A[y][d] = temp;
		    }
		    for(int i = 0; i < 9; i++)
		    {
		    for(int j = 0; j < 9; j++)
		      fprintf(f, "%c ", A[i][j]);
		    fprintf(f, "\n"); 
		    }
		    j = 10; i = 10; d = 10; y = 10;
		}
    }
    else
    {
    	for(int m = 0; m < 8; m++)
	    {
	      if(str[1] == sym[m])
			  j = 1 + m;
	      if(str[2] == num[m])
	        i = 7 - m;
	      if(str[4] == sym[m])
	        d = 1 + m;
	      if(str[5] == num[m])
	        y = 7 - m;
	    }
	    if(!(j < 8 && j >= 0 && i < 8 && i >= 0 && d < 8 && d >= 0 && y < 8 && y >= 0))
	      printf("\nERROR\n");
	    else if((isEmpty(A[y][d]) && str[3] != '-') || (!(isEmpty(A[y][d])) &&
				str[3] != 'x'))

			printf("\nERROR\n");	

	    else if(((int)A[i][j] != ((int)str[0] + 32) && A[i][j] != str[0]) || A[i][j] == 'P' || A[i][j] == 'p') printf("ERROR\n");
	    else
			if(str[3] == 'x')
			{
				A[y][d] = A[i][j];
				A[i][j] = ' ';
			}
			else
			{
				temp = A[i][j];
			    A[i][j] = A[y][d];
			    A[y][d] = temp;
		    }
		    for(int i = 0; i < 9; i++)
		    {
		    for(int j = 0; j < 9; j++)
		      fprintf(f, "%c ", A[i][j]);
		    fprintf(f, "\n"); 
		    }
		    j = 10; i = 10; d = 10; y = 10;
		}
		boardPrint(A);
    }
    
    
  fclose(f);
}
