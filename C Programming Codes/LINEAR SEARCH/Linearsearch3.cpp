/* This prg search an array by linear search */
#include <stdio.h>
int main()
{ int x[100]={25,75,46,34,28,96,33};
  int s,i,n=7;
  bool exists=false;
 /* printf("Enter the number of elements in array <100 ");
  scanf("%d",&n);  for(i=0;i<n;i++)
  {
     printf("Enter the %d. element of array ",i+1);
     scanf("%d",&x[i]);
  } */
  printf("\n Given array is \n");
  for(i=0;i<n;i++)
  { printf("%5d",x[i]); } 
 
  printf("\nEnter the searched value ");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
     if(s==x[i])
      {  exists=true; break; }
  }
  if(exists) printf("It is in array\n");
   else printf("It is not in array\n");

return 0;
}
