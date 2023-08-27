#include <stdio.h>

int main()
{ int i,d1,d2,k;
  bool h=false;
  for(i=10;i<=99;i++)
  {
  	d1=i/10;
  	d2=i-d1*10;
  	k=d1*d1+d2*d2;
  	if(k==i) 
	  {  printf("A result %d\n",i);
	     h=true;
      }
  }  
    if(h) printf("Vales were listed\n");
	else
	  printf("There are not this kind of values\n");  
   return 0;
}
