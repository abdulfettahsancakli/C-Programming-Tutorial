#include <stdio.h>
#include <string.h>

int main()
{
	char name[20];
	printf("Pls enter your name ");
	gets(name);
	printf("Your name contains %d characters.\n",strlen(name));

	
return 0;	
}



