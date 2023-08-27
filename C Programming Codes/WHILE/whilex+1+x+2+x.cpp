#include <stdio.h>
int main()
{  float t,x,y;
   int i;
   printf("This prg calcukates x/1+x/2+x/3+....+x/n\n");
   printf("Enter the x value ");
   scanf("%f",&x);
   i=1;
   y=0;
   t=1;
   while(t>=0.0001)
   { t=x/i;  
     y=y+t;
     i++; 	
   }
    printf("%d\n",i);
    printf("Result is %.2f\n",y);	
	return 0;
}
