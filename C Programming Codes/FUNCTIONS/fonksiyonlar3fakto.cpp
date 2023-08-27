#include <stdio.h>
void ali();
int n,sum;
int main()
{
    printf("Factorial of what? ");
    scanf("%d",&n);
    ali();
	printf("Result is %d\n",sum);  
	return 0;
}

void ali()
{  int i;
   sum=1;
   for(i=1;i<=n;i++)
	  { sum=sum*i; }
}
