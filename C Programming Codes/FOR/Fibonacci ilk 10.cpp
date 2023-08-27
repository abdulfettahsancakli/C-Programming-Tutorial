#include <stdio.h>
int main()
{  
  int first,next,neww,i;
  printf("This prg prints first 10 elements of fibonacci series\n");
  first=1;
  next=1;
  printf("\n%4d%4d",first,next);
  for(i=3;i<=10;i++)
  {
  	 neww=first+next;
  	 printf("%4d",neww);
  	 first=next;
  	 next=neww;	
  } 
  printf("\n");
   
 return 0;	
}
