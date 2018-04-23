#ifndef BOARD_H
#define BOARD_H

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void boardCreate(char A[][9]);
void boardPrint(char A[][9]);
bool boardMove(char A[][9], char str[]);
#endif
