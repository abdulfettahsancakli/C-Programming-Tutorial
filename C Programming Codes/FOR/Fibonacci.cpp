#include <stdio.h>
int main()
{ int first,second,niw,i,n;
printf("This prog display the first n elements of Fibonacci series\n");
printf("Enter n ");
scanf("%d",&n);
  first=1;
  second=1;
  printf("%4d %4d",first,second);
  for(i=3;i<=n;i++)
  {
  	niw=first+second;
  	printf("%4d",niw);
  	first=second;
  	second=niw;
  }
  	
return 0;	
}
