#include <stdio.h>
int main()
{  
  int i,x[10]={23,8,44,9,12};
  int *px;
  px=&x[0];
  for(i=0;i<10;i++)
   { printf("x[%d]=%d  %d\n",i,*px,px);
     px++;
   }
  	
	return 0;
}
