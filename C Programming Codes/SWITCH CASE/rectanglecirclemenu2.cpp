#include <stdio.h>
#include <math.h>
int main()
{ int choice;
  float a,b,h,r,area;
  choice=1;
  while((choice>=1)||(choice<=4))
  {
  printf("  AREA MENU\n\n");
  printf("1 - Rectangle\n\n");
  printf("2 - Circle\n\n");
  printf("3 - Triangle\n\n");
  printf("4 - Exit\n\n");
  printf("    Your choice ");
  scanf("%d",&choice);
  switch(choice)
  { case 1: printf("Enter a and b values ");
            scanf("%f %f",&a,&b);
            area=a*b;
            printf("Area is %.2f\n",area);
            break;
  	case 2: printf("Enter r value ");
            scanf("%f",&r);
            area=3.14*pow(r,2);
            printf("Area is %.2f\n",area);
            break;
  	case 3: printf("Enter a and h values ");
            scanf("%f %f",&a,&h);
            area=(a*h)/2;
            printf("Area is %.2f\n",area);
            break;
  	
  	case 4: return 0; break;
  	default : printf("Wrong entry!\n");
  }
  printf("  AREA MENU\n\n");
  printf("1 - Rectangle\n\n");
  printf("2 - Circle\n\n");
  printf("3 - Triangle\n\n");
  printf("4 - Exit\n\n");
  printf("    Your choice ");
  scanf("%d",&choice);
}

	return 0;
}
