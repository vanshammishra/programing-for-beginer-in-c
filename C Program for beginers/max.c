#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
   int a[]= {1,45,2,264,209,77};
   int max=0;
    printf("\n The Array is  ");
    for (int i = 0; i <6; i++)
    {
        printf(" %d\t",a[i]);
    }
    
    printf("\n THe maximum elemnt in array is ");

   for (int i = 0; i <6; i++)
   {
        if (a[i]>max)
        {
            max = a[i];
        }
        

   }
   
      printf("\t %d",max);
    
    return 0;
}