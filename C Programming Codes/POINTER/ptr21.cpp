#include <stdio.h>
#include <stdlib.h>
int main()
{  
  int i,n,sum;
  int *px,*pp;
  printf("Number of array elements?\n");
  scanf("%d", &n);
  px = (int *)malloc(n * sizeof(int));
  pp=px;
  for(i=0; i<n; i++) {
		printf("%d. array element value? ", i+1);
		scanf("%d", px + i);   } 
  sum=0; 
   
  for(i=0;i<10;i++)
   { sum=sum+(*pp);
     pp++;
   }
  printf("Sum of array is %d\n",sum); 
 /* 
  measurements = (int *)malloc(n * sizeof(int));

    for(i=0; i<n; i++) {
		      printf("%d. measurement value? ", i+1);
			  scanf("%d", measurements + i);   }

    avg = average(measurements, n);  */
	return 0;
}
