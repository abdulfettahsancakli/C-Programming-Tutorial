#include <stdio.h>
int main()
{ int i,k,kf;
  printf("This program calculaates k! for given k value\n");
  printf("Enter the k value ");
  scanf("%d",&k);
  kf=1;

  for(i=1;i<=k;i++)
  {
    kf=kf*i;  	
  }	
  
  printf("%d!=%d",k,kf);
  	
return 0;	
}
