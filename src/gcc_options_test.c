/*****************************************************************+
 Author : Dodo Mamane Abari.
 Program: This program let you explore the gcc options
 Example:
    -- To get preprocessing result : 
        gcc -E -o gcc_options_test.i  gcc_options_test.c
    -- To get assembler code:
        gcc -S -o gcc_options_test.s  gcc_options_test.i
    -- To get object file :
        gcc -c -o gcc_op tions_test.o gcc_options_test.i
    -- To get executable file
        gcc -o [executable_file_name]  gcc_options_test.o

*******************************************************************+*/

// HEADERS
#include <stdio.h>


// Main program
int main(int argc, char **argv){
    
    printf("Hello world\n");
    return 0;
}