#include <stdio.h>
void say(int);

int main()
{ int m;
 printf("What is time? ");
 scanf("%d",&m);
 say(m);	
 return 0;	
}

void say(int n)
{  
   if(n<12) printf("Good morning!\n");
   else
    printf("Good afternoon!\n");
}

