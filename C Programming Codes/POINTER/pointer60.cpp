#include <stdio.h>

main()
{  int i,sum,n,x[100];
   printf("Enter the size of array ");
   scanf("%d",&n);
   printf("Enter the array elements \n");
   
   for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    
   sum=0;
   for(i=0;i<n;i++)
     sum=sum+x[i];
     
   printf("Sum of array is %d\n",sum);
	return 0;
}

