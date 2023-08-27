#include <stdio.h>

main()
{  int i,sum,n,x[100];
   int *px;
   printf("Enter the size of array ");
   scanf("%d",&n);
   printf("Enter the array elements \n");
   
   for(i=0;i<n;i++)
    scanf("%d",&x[i]);
   px=&x[0]; 
   sum=0;
   for(i=0;i<n;i++)
     { printf("%d\n",*px);
       sum=sum+(*px);
	   *px++; }
     
   printf("Sum of array is %d\n",sum);
	return 0;
}

