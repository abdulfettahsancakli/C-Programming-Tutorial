#include <stdio.h>
int main()
{
	char x;
	char *p;
	p=&x;
	*p='h';
	printf("%c\n",x);
	printf("%c\n",*p);
	printf("%d\n",p);
	printf("%d\n",p+1);
		
return 0;	
}
