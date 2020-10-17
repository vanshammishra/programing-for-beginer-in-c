#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int sum=0;
    for(int i =1 ; i<1001 ; i++)
    {
      if(i%3==0 || i%5==0)
      {

      sum=sum+i;

      }

    }

    printf("sum 3 and 5 multiple b/w 1 to 1000 = %d ",sum);
    return 0;
}