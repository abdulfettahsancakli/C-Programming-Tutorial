#include <stdio.h>
int fakto(int);

int main()
{ int m,n;
  float c;
 printf("enter m and n values ");
 scanf("%d %d",&m,&n);
 c=fakto(m)/(fakto(n)*fakto(m-n));
 printf("Result is %.2f \n",c);
  
  return 0;	
}

int fakto(int k)
{ int i,sum;
  sum=1;
  for (i=1;i<=k;i++)
    sum=sum*i;
  return sum;  	
}
 
