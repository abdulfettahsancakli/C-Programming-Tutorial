#include<stdio.h>
struct ali{
	int hour;
	int minute;
	int second;
};
int main()
{
	struct ali start,finish;
	int dh,dm,ds; dh=0; dm=0; ds=0;
	printf("Enter the starting time as hour minute second\n");
	scanf("%d %d %d",&start.hour,&start.minute,&start.second);
	printf("\n");
	printf("Enter the finish time as hour minute second\n");
	printf("Finish time must be greater than starting time\n");
	scanf("%d %d %d",&finish.hour,&finish.minute,&finish.second);
    printf("\n");

	printf("you entered the following data\n");
	printf("the started time is %d:%d:%d \n",start.hour,start.minute,start.second);
	printf("the finish time is %d:%d:%d \n",finish.hour,finish.minute,finish.second);
	
	if(finish.second>=start.second)
	   ds=finish.second-start.second;
	else
	    ds=60+(finish.second-start.second); 
	
	if(finish.minute>=start.minute)
	   dm=finish.minute-start.minute;
	else
	    dm=60+(finish.minute-start.minute);     
	
	if(finish.hour>=start.hour)
	   dh=finish.hour-start.hour;

	printf("\n The diffrence time is %d:%d:%d\n",dh,dm,ds);
	

	return 0;
}
