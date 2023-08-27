#include <stdio.h>
#include <string.h>
int main()
{
  char qr[20],a[10],b[10],c[10],ans[10];
  int i,n;
  FILE *f;
  f=fopen("quesBANK.txt","a");
  printf("This prog creates a question bank\n");
  printf("How many questions do you have?");
  scanf("%d",&n);
  
  for(i=1; i<=n;i++)
  { 
    printf("Enter the %d. question info\n",i);
    gets(qr);
    printf("Enter the question itself :"); gets(qr);
    printf("Enter the option a :"); gets(a);
    printf("Enter the option b :"); gets(b);
    printf("Enter the option c :"); gets(c);
  	printf("Enter the correct answer :"); gets(ans);
  		  
    fprintf(f,"%20s %10s %10s %10s %10s\n",qr,a,b,c,ans);	  
  }	
		
fclose(f);	
return 0;
	
}
