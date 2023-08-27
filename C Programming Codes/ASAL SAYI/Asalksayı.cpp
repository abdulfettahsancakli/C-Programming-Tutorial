#include <stdio.h>
int main()
{  int n,i;
   bool prime=true;
   printf("This program tests for prime numbers\n");
   printf("Enter an integer ");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
   	 if(n%i==0)
   	  { prime=false;  break; }
   }
   if(prime) printf("It is prime\n");
   else
    printf("It is NOT prime\n");

 return 0;	
}
