#include <stdio.h>
int main()
{   
  int bd,bm,by,td,tm,ty,daysum;
  daysum=0;
  printf("This program calculates total number of days between two dates\n");
  printf("Please enter your birh date as day mounth year\n");
  scanf("%d %d %d", &bd,&bm,&by); 
  printf("Please enter todays date as day mounth year\n");
  scanf("%d %d %d", &td,&tm,&ty);  
  daysum=(ty-by)*365;
  daysum=daysum+(tm-bm)*30;
  daysum=daysum+(30-td);
  
  printf("Total number of days is %d\n",daysum); 
 return 0;	
}
