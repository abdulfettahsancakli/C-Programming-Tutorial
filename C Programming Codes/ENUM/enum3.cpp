#include <stdio.h>


int main()
{ char day[9];
  int weekValue;
  int March[5][7]={{0, 0,  1, 2, 3, 4, 5},
                   {6, 7,  8, 9,10,11,12},
                   {13,14,15,16,17,18,19},
				   {20,21,22,23,24,25,26},
				   {27,28,29,30,31,0,0}}; 
  
  enum days{Sunday,Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
  
  enum week {week_one, week_two, week_three, week_four, week_five};
  
 // printf("Enter a day name"); gets(day);
  printf("Enter a week number ");
  scanf("%d",&weekValue);
  //day=Thursday;
  printf(" Thursday the %d week of March is March %d\n",weekValue,
          March[weekValue][Thursday]);

return 0;	
}
