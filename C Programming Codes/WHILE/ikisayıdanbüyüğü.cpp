#include <stdio.h>
int main()
{   int sum,i,n,a;
  sum=0;
  printf("Enter the beginning 0f summation\n");
  scanf("%d",&a);
  printf("Enter the value of last summation\n");
  scanf("%d",&n);
  i=n;
  while(i<=n)
  {
     sum=sum+i;	
	 i++;  
  }
  printf("Total is %d\n",sum);
	return 0;
}
