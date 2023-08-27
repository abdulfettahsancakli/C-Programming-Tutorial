#include <stdio.h>
#import <math.h>
int main()
{ float x,g;
  printf("This program calculates the value of g(x) function\n");
  printf("Pls enter the x value \n");
  scanf("%f",&x);
  if(x>=10)
  { g=sqrt(pow(x,3)-1);
    printf("Result is %.2f\n",g); }
  else
  { 
  	if(x>0)
  	{ g=x-10;
  	  printf("Result is %.2f\n",g);}
  	else
  	{ g=x/10;
  		printf("Result is %.2f\n",g);}
   }
		
return 0;
}
