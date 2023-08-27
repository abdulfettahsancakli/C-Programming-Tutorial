#include <stdio.h>
void f1(int);

int main()
{ int m;
 printf("How many times? ");
 scanf("%d",&m);
 printf("This was printed within main\n");
 f1(m);	
 printf("This was also agin in main\n");
 return 0;	
}
void f1(int n)
{ int i; 
  for (i=1;i<=n;i++)
	printf("Hello.. from function1\n");
}

