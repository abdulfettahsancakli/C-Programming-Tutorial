#include <stdio.h>

int sum(int, int);

int main()
{ int a,b;
  printf("Enter two integers");
  scanf("%d %d",&a,&b);
  printf("Sum of them is %d\n", sum(a,b));
 return 0;	
}

int sum(int d, int e )
{ int s;
  s=d+e;
  return s;
}
