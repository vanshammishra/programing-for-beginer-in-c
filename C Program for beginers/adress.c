#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{   int *ptr;
    int a=6;
    float b=5;
    char d='r';
//    *((int*)ptr);
   *((int*)ptr)=a;
    printf("adress of a is %d",ptr);
    return 0;
}