/*****************************************************************+
 Author : Dodo Mamane Abari.
 Date   :
 Program: Explore getchar and putchar

 ******************************************************************/
// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    printf("\n");
}