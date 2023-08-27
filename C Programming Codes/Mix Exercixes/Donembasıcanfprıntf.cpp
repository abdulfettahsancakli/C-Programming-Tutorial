#include <stdio.h>
#include <stdlib.h>
int main()
{
  int age;
  float distance;
  printf("How old are you? ");
  scanf("%d",&age);
  printf("How far is your home? ");
  scanf("%f",&distance);
  printf("You are %d years old.\n",age);
  printf("Your home is %.2f km away from here.",distance);
  system("pause");
	return 0;
}
