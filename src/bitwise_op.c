/*****************************************************************+
 Author : Dodo Mamane Abari.
 Date   :
 Program: Explore operator
    & : and
    | : or
    ^ : exclusif or
    ~ : one complement
    >>: right shift
    <<: left shift

 ******************************************************************/
// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x = 3;
    int y = 10;

    printf("%x & %x = %x\n", x, y, (x & y));
    printf("%x | %x = %x\n", x, y, (x | y));
    printf("%x ^ %x = %x\n", x, y, (x ^ y));
    printf("not %x  = %x\n", x,  (~x));
    printf("%x<<2 = %x \n",x, (x<<2) );
    printf("%x>>2 = %x \n",x, (x>>2) );

    return 0;
    

}