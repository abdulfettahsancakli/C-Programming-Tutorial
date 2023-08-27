#include <stdio.h>
#include <math.h>
void nroot();
void equal(float, float);
void two(float, float, float);

int main()
{ float a,b,c,d;
  printf("This prog calculates the roots of 2nd degree fn\n");
  printf("Enter a,b and c values ");
  scanf("%f %f %f",&a,&b,&c);
  d=b*b-4*a-c;
  if (d<0) nroot();
  else
    if (d==0) equal(a,b);
    else
      two(a,b,d);
    
  return 0;	
}

void nroot()
{printf("No real roots!\n");
}

void equal(float a, float b)
{ float x1;
  x1=(-b)/(2*a);
  printf("Two equal roots. %.2f\n",x1);
}

void two(float a, float b, float d)
{ float x1,x2;
  x1=(-b-sqrt(d))/(2*a);
  x2=(-b+sqrt(d))/(2*a);
  printf("Two roots %.2f %.2f\n",x1,x2);
}


