#include <stdio.h>
#include "berk.h"
int main()
{ int n,m;
  printf("Enter two integer value ");
  scanf("%d %d",&n,&m);
  printf("Summation of them is %d\n",sum(n,m));
  printf("Maximumof them is %d\n",max(n,m));	
return 0;	
}
