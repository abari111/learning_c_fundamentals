/*****************************************************************+
 Author : Dodo Mamane Abari.
 Date   :
 Program: Explore operator
    > : superior
   >= : superior or equal
    < : inferior
    <=: inferior or equal
   == : equal
   != : different
 ******************************************************************/
// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 0;
    int b = 1;

    printf("a > b: %d\n", (a > b));
    printf("a >= b: %d\n", (a >= b));
    printf("a < b: %d\n", (a < b));
    printf("a <= b: %d \n", (a <= b));
    printf("a == b: %d\n", (a == b));
    printf("a != b: %d\n", (a != b));

    return 0;
}