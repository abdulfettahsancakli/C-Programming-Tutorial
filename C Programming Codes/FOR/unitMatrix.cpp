#include <stdio.h>
int main()
{ int x[20][20];
  int i,j,n,m,flag=0;
  printf("This grog test for unit matrix\n");
  printf("Enter the number of rows : "); scanf("%d",&n);
  printf("Enter the number of columns : "); scanf("%d",&m);	
  printf("Enter the matrix elements \n");	
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{ printf("Row: %d  Column : %d : value ? ",i,j);
  	  scanf("%d",&x[i][j]); 
    }
  }
  printf("Given matrix is :\n");
  for(i=0;i<n;i++)
  { printf("\n");
  	for(j=0;j<m;j++)
  	{ printf("%5d",x[i][j]);    } 	
  }
  printf("\n");
  for(i=0;i<n;i++)
  { 
  	for(j=0;j<m;j++)
  	{ if(i!=j)
	     if(x[i][j]!=0) flag=1;
	  if(i==j) 
	    if (x[i][j]!=1) flag=1;
	} 	
  }	
  if (flag==0) printf("It is a unit matrix.\n");
  else printf("It is NOT a unit matrix.\n");
   		
return 0;	
}
