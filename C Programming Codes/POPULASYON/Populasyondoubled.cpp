#include <stdio.h>
int main()
{ float r,n,dp;
 int year;
 printf("This prg calculates number of years to be doubled population of a city by r\n");
 printf("Enter the current population of city ");
 scanf("%f",&n);
 printf("Enter the increment rate ");
 scanf("%f",&r);
 dp=n*2;
 year=1;
   while (n<=dp)
   {
	n=n+(n*r);
	year++;
   }
	
  printf("%d years later population will be doubled\n",year);	
  return 0;	
}
