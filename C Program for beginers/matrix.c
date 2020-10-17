#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{   int a[3][2], b[2][3], c[3][3];
    int add=0;  
    printf("\tenter the elment in your matrix A\n" );
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <2; j++)
        {
            //  printf("Enter the elment for %d  and  %d  ",i,j);
            scanf(" %d", &a[i][j]);
           
        }
        
    }
        printf("\n Enter theelment in second matrix B\n");
        for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <3; j++)
        {
            //  printf("Enter the elment for %d  and  %d  ",i,j);
            scanf(" %d", &a[i][j]);
        }
        
    }

   printf("\n Matrix C is \n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            for ( int k = 0; k <3; k++)
            {
                
                add += a[i][k]*b[k][j];  
            }
                
            c[i][j]=add;        
           add =0;
        }
        
    }
  // result of matrix

  for (int i = 0; i <3 ; i++)
  {
      for (int j = 0; j <3; j++)
      {
          printf("%d\t",c[i][j]);
      }
      printf("\n");
  }
  
    return 0;
}