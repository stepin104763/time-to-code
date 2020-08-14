#include<stdio.h>
#include<stdlib.h>
 int prime(int);

 int main()
{
   int n, result;
   scanf("%d",&n);
   if(n<=0)
   {
   printf("False");
   return 0;
   }
   result = prime(n);
   if ( result == 1 )
      printf("True");
   else
      printf("False");
   return 0;
}

int prime(int b)
{
   int c;
   for ( c = 2 ; c <= b - 1 ; c++ )
   {
      if ( b%c == 0 )
     return 0;
   }
   return 1;
}
