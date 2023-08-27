#include <time.h>
#include <stdlib.h>
#include <stdio.h>
 
int three();

int main()
{  
   srand(time(NULL));    
   
   printf("Three time was %d\n",three());   
  return 0;
}

int three()
{ int i,count,die1,die2;
   count=0;
   for(i=1;i<=100;i++)
   {
   	die1 = rand()%6;
   	die1++;
   	die2 = rand()%6;
   	die2++;
   	if(die1==die2) 
	   if(die1==6) count++; 
   }
  return count; 	
}
