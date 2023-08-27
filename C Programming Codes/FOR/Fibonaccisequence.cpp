#include <stdio.h>
int main()
{  
  int first,next,neww,i,look;
  printf("This prg prints fibonacci series value\n");
  printf("Enter the sequence number in serie ");
  scanf("%d",&look);
  first=1;
  next=1;
 
  for(i=3;i<=look;i++)
  {
  	 neww=first+next;
  	 first=next;
  	 next=neww;	
  } 
  printf("%d\n",neww);
   
 return 0;	
}
