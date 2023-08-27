#include <stdio.h>
int main()
{   
    float r,ca,pi;

	printf("This program displays the area of a circle\n");
	printf("Please enter radius value of circle\n");
	scanf("%f",&r);
	pi=22/7.0;
	ca=pi*(r*r);
	printf("The area of a circle with %.3f radius is %.2f",r,ca);
	
 return 0;	
}
