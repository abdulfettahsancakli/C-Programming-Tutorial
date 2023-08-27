#include <stdio.h>
int main()
{  bool founded=false;
   int num,d1,d2,d3,dd,k;
  for(num=100;num<=999;num++)
  {
  	d1=num/100;
  	dd=num-d1*100;
  	d2=dd/10;
  	d3=dd-d2*10;
  	k=d1*d1*d1+d2*d2*d2+d3*d3*d3;
  	if(k==num)  
	  { printf("Value %d \n",num);
        founded=true;  }
  }
  if (not founded) printf("There is no any value!");
 return 0;         
}
