#include <stdio.h>
int main()
{
	int x;
	int *p;
	p=&x;
	*p=2;
	printf("%d\n",x);
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",p+1);
		
return 0;	
}
