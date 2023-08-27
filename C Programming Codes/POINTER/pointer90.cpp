#include <stdio.h>

main()
{  int x[5];
   int i,n,max;
   int *px;
   printf("Enter the size of array ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     scanf("%d",&x[i]);
   px=&x[0]; max=*px;
   for(i=0;i<n;i++)
   {
      if(*px>max) max=*px;
      *px++;
   }
   printf("maximum value of array  is %d\n",max);
	return 0;
}

