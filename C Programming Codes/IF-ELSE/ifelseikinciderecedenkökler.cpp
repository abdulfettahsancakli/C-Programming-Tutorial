#include <stdio.h>
#include <math.h>
int main()
{ float a,b,c,d,x1,x2;
  printf("This program searchs the root of 2nd degree equations\n");
  printf("Pls enter the values of a, b and c");
  scanf("%f %f %f",&a,&b,&c);
  if(a==0) {
  	printf("Error! a cannot be 0\n");
  	return 0; }
  else
   { d=b*b-4*a*c;
     if(d<0) {
        printf("No real roots!\n"); }
     else
	 { if(d==0) {
	 	x1=(-b)/(2*a);
	 	printf("Two equal roots %.2f\n",x1); }
	   else  {
	   	x1=(-b-sqrt(d))/(2*a);
	   	x2=(-b+sqrt(d))/(2*a);
	   	printf("Two diffrent roots %.2f %.2f\n",x1,x2); }
	 }	   
   }
 return 0;	
}
