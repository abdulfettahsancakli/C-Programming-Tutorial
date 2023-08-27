#include <stdio.h>
int factor(int);

int main()
{ int n,m,c;
printf("This prog calculates combination of m and n\n");

 printf("What is m and n? ");
 scanf("%d %d",&m,&n);
 c=factor(m)/(factor(n)*factor(m-n));
 printf("Result is %d\n",c);	
 return 0;	
}

int factor(int k)
{  int i,sum;
   sum=1;
   for(i=1;i<=k;i++)
     sum=sum*i;
   return sum;  
}

