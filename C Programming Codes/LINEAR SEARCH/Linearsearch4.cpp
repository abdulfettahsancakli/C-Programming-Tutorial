/* This prg search an array by linear search */
#include <stdio.h>
int main()
{ int x[100]={25,75,46,34,28,46,33};
  int s,i,n=7;
  int count=0;

  printf("\n Given array is \n");
  for(i=0;i<n;i++)
  { printf("%5d",x[i]); } 
 
  printf("\nEnter the searched value ");
  scanf("%d",&s);
  
  for(i=0;i<n;i++)
  {
     if(s==x[i])
      {  count++; }
  }
  
  if(count==0) printf("It is not in array\n");
   else printf("It is exists %d times in array\n",count);

return 0;
}
