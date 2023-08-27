#include <stdio.h>

int main()
{ int d1,d2,d3,num,k;
  for(d1=0;d1<=9;d1++)
  {
     for(d2=0;d2<=9;d2++)
     { 
       for(d3=0;d3<=9;d3++)
       {
	    num=d1*100+d2*10+d3;
        k=d1*d1*d1+d2*d2*d2+d3*d3*d3;
        if(num==k) printf("This value %d\n",num);
       }
     }
  }
   return 0;
}
