#include <stdio.h>
#include <string.h>

int main()
{
	char name[20];
    char name2[20];
	printf("Pls enter your name ");
	gets(name);
	strupr(name);
	printf("Your name is %s.\n",name);

	
return 0;	
}



