#include <stdio.h>
#include <string.h>
#include <conio.h>
    /*   
        
    */
  int fact,temp;
  char a;
int facto();
int value();
int main()
{ 
  while (1)
  {   
    printf("\t F  find factorial and press  E to exit\n");
    scanf("%c",&a);
     
  switch (a)
  {
  case 'f': 
      {
           value();
           getchar();
       }        
      break;
case 'F': 
      {
          value();
          getchar();
      }
      break;
    case 'e':
     {
              if (a=='e')
          {
              goto stop;
          }
          
       }
  case 'E':
     {
              if (a=='E')
          {
              goto stop;
          }
          
       }
//   default :
//   {
//        printf("\n\tenter the right keyword\n\t");
//   } break;

      }
    
      /* code */
  }
  stop:
  printf("exiting Factorial software....");
      return 0;
}

int facto(int fact)
{
   if (fact==0)
   {
       return 1;
   }
   else
   return fact*facto(fact-1);
   
}

int value ()
{


       printf("\n\t enter the NUM for factorial\n\t");
         scanf("%d",&fact);
          facto(fact);
          temp=facto(fact);
printf("%d Factorial is ->\t %d\n",fact,temp);

}