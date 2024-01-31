#include<stdio.h>
int prime(int);
 int main()
{
   int n, r;
   printf(" Enter a number.\n");
   scanf("\n%d",&n);
   r=prime(n);
   if ( r== 1 )
      printf("\n%d is a prime number.\n", n);
   else
      printf("\n%d is not a prime number.\n", n);
   return 0;
} 
int prime(int a)
{
   int i;
   for ( i= 2;i<= a-1;i++)
   { 
      if (a%i== 0 )
     return 0;
   }
   return 1;
}