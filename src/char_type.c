/*****************************************************************+
 Author : Dodo Mamane Abari.
 Date   :
 Program: Explore char type / print ASCII Table
 ******************************************************************/

// Directives preprocesseur
#include <stdio.h>


int main(int argc, char** argv){


    for (int i = 35; i < 128; i++){

        printf("%3d:%c |", i , i);
        if (i%5 == 0)
        {
            printf("\n");
        }
        

    }
    printf("\n");
    return 0;
}