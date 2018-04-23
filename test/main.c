#define CTEST_MAIN

#include <ctest.h>
#include "board.h"
char A[9][9];
CTEST(Syntax, CorrectSyntaxCheck) {
    bool result = boardMove(A, "e2-e4");
    ASSERT_TRUE(result);
}

CTEST(Syntax, IncorrectSyntaxCheck) {
    bool result = boardMove(A, "Pe2-e4");
    ASSERT_FALSE(result);
}

CTEST(Syntax, IncorrectS) {
    bool result = boardMove(A, "b1-b3");
    ASSERT_FALSE(result);
}

CTEST(Syntax, Incorrect) {
    bool result = boardMove(A, "e2xe4");
    ASSERT_FALSE(result);
}

CTEST(Syntax, Synt) {
    bool result = boardMove(A, "e2-e7");
    ASSERT_FALSE(result);
}

int main(int argc, const char** argv)
{
	boardCreate(A);
    return ctest_main(argc, argv);
}

