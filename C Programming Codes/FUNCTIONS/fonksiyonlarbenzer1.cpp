#include <stdio.h>
void f1()
{ int i; 
  for (i=1;i<=5;i++)
	printf("Hello.. from function1\n");
}

int main()
{
 printf("This was printed within main\n");
 f1();	
 printf("This was also agin in main\n");
 return 0;	
}
