#include <stdio.h>
int main()
{   int sum,i,n;
  i=1;
  sum=0;
  printf("Enter the value of last summation\n");
  scanf("%d",&n);
  while(i<=n)
  {
     sum=sum+i;	
	 i++;  
  }
  printf("Total is %d\n",sum);
	return 0;
}
