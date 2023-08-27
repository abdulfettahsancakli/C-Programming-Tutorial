#include <stdio.h>
int main()
{ int i,j;
  
  for(i=1;i<=8;i++)
  { 
  	for(j=i;j>0;j--)
  	{
  	  printf("%3d",j);	
	}
  	printf("\n"); 	
  } 
	
return 0;	
}
