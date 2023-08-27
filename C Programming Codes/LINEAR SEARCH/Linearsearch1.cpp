/* This prg search an array by linear search */
#include <stdio.h>
int main()
{ int x[100],s,i,n;
  printf("Enter the number of elements in array <100 ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     printf("Enter the %d. element of array ",i+1);
     scanf("%d",&x[i]);
  }
  printf("\n Given array is \n");
  for(i=0;i<n;i++)
  { printf("%5d",x[i]); } 
 
  printf("\nEnter the searched value ");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
     if(s==x[i])
      { printf("It is in array\n"); break; }
  }
  if(i==n) printf("It is not in array\n");


return 0;
}
