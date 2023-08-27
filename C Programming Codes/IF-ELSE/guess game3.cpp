#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main()
{  printf("This is a number guessing game\n");
   printf("User will guess a value 0-50\n");
   int holded,trail,given;
   bool f=true;
   srand(time(NULL));    
   holded = rand()%50; 
   printf("%d\n",holded);  
   printf("Enter an integer between 0-50 : \n");
   scanf("%d",&given);
   if(holded==given)
      { printf("Bravooo..\n"); f=false; return 0; }
   trail=2;
   while(trail<=3)
   { if(holded==given)
      { printf("Bravooo..\n"); break; }
   	 if(given>holded)  printf("Dovn..\n");
   	 else
		printf("Up..\n");
	printf("Enter an integer between 0-50 : \n");
   scanf("%d",&given);	 
   trail++;	
   }
   if(f)
    printf("Trails over. The value was %d \n",holded);
 return 0;  
}
