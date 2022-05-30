/*****************************************************************+
 Author : Dodo Mamane Abari.
 Date   :
 Program: Explore operator
    && : and
    || : or
     ! : negation
 ******************************************************************/
// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>


int main()
{

    printf("And Truth table\n");
    printf("a   b   F\n");
    printf("0 | 0 | %d\n", (0 && 0));
    printf("0 | 1 | %d\n", (0 && 1));
    printf("1 | 0 | %d\n", (1 && 0));
    printf("1 | 1 | %d\n", (1 && 1));

    printf("-----------------------------------------\n");
    printf("OR Truth table\n");
    printf("a   b   F\n");
    printf("0 | 0 | %d\n", (0 || 0));
    printf("0 | 1 | %d\n", (0 || 1));
    printf("1 | 0 | %d\n", (1 || 0));
    printf("1 | 1 | %d\n", (1 || 1));

    printf("-----------------------------------------\n");
    printf("OR Truth table\n");
    printf("a   F\n");
    printf("0 | %d\n", (!0));
    printf("1 | %d\n", (!1));
}