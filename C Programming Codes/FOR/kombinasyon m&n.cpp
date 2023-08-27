#include <stdio.h>
int main()
{ int i,m,n,c,mf,nf,mnf;
  printf("This program calculaates combination for given m&n value\n");
  printf("Enter the m and n values ");
  scanf("%d %d",&m,&n);
  mf=1;
  for(i=1;i<=m;i++)  mf=mf*i;  	
  
  nf=1;
  for(i=1;i<=n;i++)  nf=nf*i; 
  
  mnf=1;
  for(i=1;i<=m-n;i++)  mnf=mnf*i; 
  
  c=mf/(nf*mnf);
  
  printf("Result is %d",c);
  	
return 0;	
}
