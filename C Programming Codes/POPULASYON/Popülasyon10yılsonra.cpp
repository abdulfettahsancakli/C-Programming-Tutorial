#include <stdio.h>
int main()
{ float r,n;
 int year;
 printf("This prg calculates the population a a city by r growth for 10 years\n");
 printf("Enter the current population of city ");
 scanf("%f",&n);
 printf("Enter the increment rate ");
 scanf("%f",&r);
 year=1;
   while (year<=10)
   {
	n=n+(n*r);
	year++;
   }
	
  printf("10 years later population will be %.0f\n",n);	
  return 0;	
}
