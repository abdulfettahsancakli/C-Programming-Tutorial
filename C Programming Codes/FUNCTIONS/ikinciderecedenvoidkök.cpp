#include <stdio.h>
#include <math.h>
void noroots();
void equalroots(float, float);
void tworoots(float,float,float);

int main()
{ float a,b,c,d;
  printf("This prog finds roots of 2nd degree function\n");
  printf("Enter a,b and c parameters ");
  scanf("%f %f %f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d<0) noroots();
  else
  {
  	if (d==0) equalroots(a,b);
  	else
  	  tworoots(a,b,d);
  }
  return 0;	
  }
  
  void noroots()
  { printf("No real roots!\n"); }
  
  void equalroots(float a, float b)
  { float x1;
    x1=(-b)/(2*a);
    printf("equal roots %.2f\n",x1);
  } 
  
  void tworoots(float a,float b,float d)
  { float x1,x2;
    x1=(-b-sqrt(d))/(2*a);
    x2=(-b+sqrt(d))/(2*a);
    printf("Two roots %.2f %.2f\n",x1,x2);
  }
