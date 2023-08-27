#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main()
{
   int num;
   srand(time(NULL));    
   num = rand()%50; 

   printf("%d\n",num);    
   
   return 0;
}
