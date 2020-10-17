#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{    // this is the code which is used to grasp some info rea=garding the matrices
    int a1[4][3];
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <3; j++)
        {
           scanf("%d",&a1[i][j]);
        }
        
    }
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <3; j++)
        {
           printf("%d\t",a1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
