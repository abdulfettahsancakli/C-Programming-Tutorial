#include <stdio.h>
struct ali{
	char name[20];
	int age;
};

int main()
{ struct ali nw;
  printf("Enter the name :"); 
  scanf("%s",&nw.name);
  printf("Enter the age :");
  scanf("%d",&nw.age);
  printf("You entered the fallowing data\n\n");
  printf("Name is %s \n",nw.name);
  printf("Age is %d \n",nw.age);
	
return 0;	
}
