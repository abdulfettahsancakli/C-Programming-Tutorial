#include <stdio.h>
int main()
{  bool founded=false;
   int num,d1,d2,d3,k;
  	for(d1=0;d1<=9;d1++)
  	{ for(d2=0;d2<=9;d2++)
  	  { for(d3=0;d3<=9;d3++)
  	    { num=d1*100+d2*10+d3;
          k=d1*d1*d1+d2*d2*d2+d3*d3*d3;
  	      if(k==num)  
	      { printf("Value %d \n",num);
             founded=true;  }
        }
      }
    }
  if (not founded) printf("There is no any value!");
 return 0;         
}
