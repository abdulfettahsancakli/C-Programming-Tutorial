#include <stdio.h>
#include <math.h>

int main()
{   int x1,y1,x2,y2,dist;
	printf("This prog calculates the distance of given two points\n");
	printf("Enter the coordinates of first point ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the coordinates of second point ");
	scanf("%d %d",&x2,&y2);
    printf("Distance is %.2f\n",dist(x1,y1,x2,y2));
    return 0;
}
