#include <stdio.h>
struct student
 { char name[20];
   int enroll;
   float marks;
 }s;
int main()
{
 printf("Enter informat,on for structure \n");
 printf("Enter name :"); scanf("%s",s.name);
 printf("Enter enrollment situation :"); scanf("%d",&s.enroll);
 printf("Enter marks :"); scanf("%f",&s.marks);
 
 printf("You entered data as:\n");
 printf("Name :%s\n",s.name);	
 printf("Enrollment : %d\n",s.enroll);
 printf("Marks : %.2f\n",s.marks);	
return 0;	
}
