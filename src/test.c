#include <stdio.h>


int main(){
    int *i;
    int *j;
    int a = 3, b = 1;

    i = &a;
    j = &b;

    printf("*i **j = %d\n", *i**j);
    return 0;
}