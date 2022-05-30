/*****************************************************************+
 Author : Dodo Mamane Abari.
 Date   :
 Program: Explore int
 ******************************************************************/
// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(){
    int x;
    short y;
    unsigned int u_x;
    long int l_x;

    printf("size int : %lu \n", sizeof(x));
    printf("size short : %lu \n", sizeof(y));
    printf("size unsigned int : %lu \n", sizeof(u_x));
    printf("size long int : %lu \n", sizeof(l_x));

    return 0;

}