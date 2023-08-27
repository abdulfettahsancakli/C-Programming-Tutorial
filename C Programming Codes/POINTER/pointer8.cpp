#include <stdio.h>

main()
{  int x[5]={7,2,8,3,6};
   int i,max;
   int *px;
   px=&x[0]; max=*px;
   for(i=0;i<5;i++)
   {
      if(*px>max) max=*px;
      *px++;
   }
   printf("maximum value of array  is %d\n",max);
	return 0;
}

