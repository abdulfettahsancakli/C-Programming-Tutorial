#include <stdio.h>
#include <string.h>

int main()
{
	char name[20],ch;
    int i=0;
    printf("Enter your name ");
    while(ch!='\n')
	{
	  ch=getchar();
	  name[i]=ch;
	  i++;	
    }
    name[i]='\0';
	printf("Your name is %s\n",name);

	
return 0;	
}



