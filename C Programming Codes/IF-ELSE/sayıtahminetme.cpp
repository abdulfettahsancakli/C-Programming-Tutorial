#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{  int holded,trail,given;
   srand(time(NULL));    
   holded = rand()%50; 
   printf("%d\n",holded);    
   printf("This game related number quess\h");
   printf("Computer will hold an integer 0-50\n");
   printf("Quess this holded value within 3 trails\n");
   trail=1;
   printf("Enter an integer 0-50\n");
   scanf("%d",&given);
   if(given==holded) printf("It is right! Bravooo..\n");
   else
    { if(given>holded) printf("Down....\n");
      else
	    printf("Up....\n");
	}
    



 return 0;	
}
