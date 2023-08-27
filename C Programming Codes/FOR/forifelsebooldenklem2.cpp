#include <stdio.h>

int main()
{ int i,d1,d2,d3,dd,k;
  bool h=false;
  for(i=10;i<=999;i++)
  {
  	d1=i/100;
  	dd=i-d1*100;
  	d2=dd/10;
  	d3=dd-d2*10;
  	k=d1*d1*d1+d2*d2*d2+d3*d3*d3;
  	if(k==i) 
	  {  printf("A result %d\n",i);
	     h=true;
      }
  }  
    if(h) printf("Vales were listed\n");
	else
	  printf("There are not this kind of values\n");  
   return 0;
}
