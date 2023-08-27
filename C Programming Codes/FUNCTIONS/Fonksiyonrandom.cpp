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
{ int i,count,die;
   count=0;
   for(i=1;i<=100;i++)
   {
   	die = rand()%6;
   	die++;
   	if(die==3) count++; 
   }
  return count; 	
}
