#include <stdio.h>
int main()
{  int k,kf,i;
   printf("This prg calculates k!\n");
   printf("Enter the value of k ");
   scanf("%d",&k);
   
   kf=1;
   
   for(i=1;i<=k;i++)
   {
   	kf=kf*i;
   }
   
   printf("%d!=%d\n",k,kf);
   
 return 0;	
}
