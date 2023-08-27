#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main()
{  printf("This is a number guessing game\n");
   printf("User will guess a value 0-50\n");
   int holded,trail,given;
   srand(time(NULL));    
   holded = rand()%50; 
   printf("%d\n",holded);    
   printf("Enter a value between 0 and 50 ");
   scanf("%d",&given);
   trail=2;
   while((given!=holded)&&(trail<=3))
   {
   	if(given==holded) 
   	  { printf("Bravooo!\n"); break; }
	else
	{ if(holded<given) printf("Down....\n");
	  else
	  printf("Up....\n");
	}   
   	printf("Enter a value between 0 and 50 ");
    scanf("%d",&given);
    trail++;
   }
   if(holded!=given)
     printf ("Trails are over. The value was %d\n",holded);
   
   return 0;
}
