/*****************************************************************+
 Author : Dodo Mamane Abari.
 Date   :
 Program: Explore type size
 ******************************************************************/

// Directives preprocesseur
#include <stdio.h>

int main(int argc, char** argv){

    printf("char      => %lu bytes\n", sizeof(char));
    printf("int       => %lu bytes\n", sizeof(int));
    printf("short int => %lu bytes\n", sizeof(short int));
    printf("long int  => %lu bytes\n", sizeof(long int));
    printf("float     => %lu bytes\n", sizeof(float));
    printf("double    => %lu bytes\n", sizeof(double));

    printf("%lu\n", sizeof(2.));

    return 0;

}