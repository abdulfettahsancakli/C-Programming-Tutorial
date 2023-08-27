#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{  int holded,trail,guess;
   srand(time(NULL));    
   holded = rand()%50; 
   printf("%d\n",holded); 
   printf("This is a game program\n");
   printf("Computer holds a value 0-50\n");
   printf("You will try to guess it within 3 trails\n");
   printf("Please enter a value 0-50\n");
   scanf("%d",&guess);
   trail=1;
   if(guess==holded) printf("Bravooooo!");
   else
   { if(guess>holded) printf("Down\n");
     else
       printf("Up\n");
   	 trail++;
   	 if(trail>3) 
   	 	 printf("The holded value was %d\n",holded);
   }
   
   
   

return 0;
}
