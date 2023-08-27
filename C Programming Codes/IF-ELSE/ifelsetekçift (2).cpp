#include <stdio.h>
int main()
{   int x,i;
  i=1;
  while(i<=5)
  {
    printf("Enter a integer to test EVEN or ODD\n");
	scanf("%d",&x);
	if(x%2==0) printf("It is EVEN..\n");
	else
	  printf("It is ODD..\n"); 	
	i++;   
 }
   
	return 0;
}
