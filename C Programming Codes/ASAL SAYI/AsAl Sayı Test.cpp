#include <stdio.h>
int main()
{ int n,i,prm;
  printf("This prog tests an integer as prime number\n");
  printf("Enter an integer  ");
  scanf("%d",&n);
  prm=1;
  i=2;
  while(i<=n-1)
  {
  	if(n%i==0) prm=0;
  	i++;
  }
  if(prm==1) printf("It is a prime number\n");
  else
    printf("It is NOT a prime number\n");

  return 0;
}
