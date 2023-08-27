#include <stdio.h>

struct TIME
 { int seconds;
   int minutes;
   int hours;
 };
 
//void diffBetweenTime(struct TIME t1, struct TIME t2, struct TIME t3); 

int main()
{ struct TIME startTime, stopTime,diff;
 printf("This prog calculates diffrence between two time periods \n");
 printf("Enter start time\n");
 printf("Enter hours, minutes and seconds respectively\n");
 scanf("%d %d %d",&startTime.hours,&startTime.minutes,&startTime.seconds);
 
 printf("Enter stop time\n");
 printf("Enter hours, minutes and seconds respectively\n");
 scanf("%d %d %d",&stopTime.hours,&stopTime.minutes,&stopTime.seconds);
 
 if(stopTime.seconds>startTime.seconds)
   diff.seconds=stopTime.seconds-startTime.seconds;
 else
   diff.seconds=60+stopTime.seconds-startTime.seconds;  
   
 if(stopTime.minutes>startTime.minutes)
   diff.minutes=stopTime.minutes-startTime.minutes;
 else
   diff.minutes=60+stopTime.minutes-startTime.minutes; 
   
 if(stopTime.hours>startTime.hours)
   diff.hours=stopTime.hours-startTime.hours;
 else
   diff.hours=stopTime.hours-startTime.hours;   
   
 printf("Time difference is:\n");
 printf("Hour:%d Minute:%d Second %d\n",diff.hours,diff.minutes,diff.seconds);     
 
return 0;	
}
