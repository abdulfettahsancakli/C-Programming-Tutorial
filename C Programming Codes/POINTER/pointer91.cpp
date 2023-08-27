#include <stdio.h>

main()
{ 
   int i,n,max;
   int *px;
   printf("Enter the size of array ");
   scanf("%d",&n);
   px=(int *)malloc(n*sizeof(int));
   printf("Enter array elements ");
   for(i=0;i<n;i++)
     scanf("%d",&x[i]);
     
   max=*px;
   for(i=0;i<n;i++)
   {
      if(*px>max) max=*px;
      *px++;
   }
   printf("maximum value of array  is %d\n",max);
	return 0;
}

