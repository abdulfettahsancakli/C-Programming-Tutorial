#include <stdio.h>
int main()
{ 
  int sum,i,a;
  sum=0;
  printf("Enter a value\n");
  scanf("%d",&a);
  i=1;
  while(i<=a-1)
  {
    if(a%i==0) sum=sum+i ;
    i++;
  }
  
    if(sum==a) printf("It is perfect\n");
    else
    printf("It is NOT perfect\n");
	return 0;
}
