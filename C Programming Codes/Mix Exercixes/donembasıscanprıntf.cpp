#include <stdio.h>
int main()
{ int age,cls;
  float dist,tal;
  printf("What is your age? "); 
  scanf("%d",&age);
  printf("What is your class? ");
  scanf("%d",&cls);
  printf("What is the distance of your home to school? ");
  scanf("%f",&dist);
  printf("What is your body length? ");
  scanf("%f",&tal);
  printf("Your age is %d\n Your class is %d\n",age,cls);
  printf("Your home is %.2f km far\n ",dist);
  printf("You are %.2f cm tall\n",tal);
  return 0;
}
