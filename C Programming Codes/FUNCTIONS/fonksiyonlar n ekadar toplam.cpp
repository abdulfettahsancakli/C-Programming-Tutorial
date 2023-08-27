#include <stdio.h>
int total(int);

int main()
{ int n;
 printf("What is n? ");
 scanf("%d",&n);
 printf("Result is %d\n",total(n));	
 return 0;	
}

int total(int k)
{  
   int i,sum;
   sum=0;
   for(i=1;i<=k;i++)
     sum=sum+i;
   return sum;  
}

