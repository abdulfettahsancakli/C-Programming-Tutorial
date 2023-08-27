#include <stdio.h>
int sum(int);

int main()
{ int m,n;
  float c;
 printf("enter m and n values ");
 scanf("%d %d",&m,&n);
 c=sum(m)/float(sum(n));
 printf("Result is %.2f \n",c);
  
  return 0;	
}

int sum(int k)
{ int i,total;
  total=0;
  for (i=1;i<=k;i++)
    total=total+i;
  return total;  	
}
 
