#include <stdio.h>
int main()
{  int i,x;
   float y,t;
   printf("This prg calculates y=x/1+x/2+x/3+......+x/n\n");
   printf("Enter the value of x ");
   scanf("%d",&x);
   y=0;
    i=1;
    t=1;
    while(t>0.001)
    {
      t=float(x)/i;
      printf("%.3f\n",t);
      y=y+t;
      i++;
   }

  printf("Result is %.2f\n",y);
  
  return 0;	
}
