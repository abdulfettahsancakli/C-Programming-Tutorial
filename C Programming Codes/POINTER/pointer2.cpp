#include <stdio.h>
int main()
{
	float x;
	float *p;
	p=&x;
	*p=2;
	printf("%f\n",x);
	printf("%f\n",*p);
	printf("%d\n",p);
	printf("%d\n",p+1);
		
return 0;	
}
