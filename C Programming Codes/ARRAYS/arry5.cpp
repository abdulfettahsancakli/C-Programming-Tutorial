#include <stdio.h>
int main()
{ int x[500];
  int max,i,n;
 printf("This prg calculates the sum of an array with up to 500 elements\n");

 printf("Enter the size of array ");
 scanf("%d",&n); 
 for(i=0;i<n;i++)
   { printf("Enter the %d. element ",i+1); 
     scanf("%d",&x[i]); }	 
   
 for(i=0;i<n;i++)
   {  printf("%4d",x[i]); }	
 printf("\n");  
 
 max=x[0];
 for(i=0;i<n;i++)
 { if(x[i]>max) max=x[i];  }

 printf("Maximum value of the array is %d\n",max);
 		
return 0;	
}
