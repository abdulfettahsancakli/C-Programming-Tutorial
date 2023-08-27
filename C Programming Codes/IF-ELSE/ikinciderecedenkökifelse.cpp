#include <stdio.h>
#import <math.h>
int main()
{ float a,b,c,d,x1,x2;
  printf("This program calculates the roots of 2nd deg function\n");
  printf("Pls enter the a,b,c values \n");
  scanf("%f %f %f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d<0) printf("No real roots...\n");
  else
  { if(d==0) {
  	 x1=-b/(2*a);
  	 printf("Two equal roots %.2f\n",x1); }
  	else {
	  x1= (-b-sqrt(d))/(2*a);
	  x2= (-b+sqrt(d))/(2*a);
	  printf("Two different roots %.2f %.2f\n",x1,x2); }
  }
return 0;
}
