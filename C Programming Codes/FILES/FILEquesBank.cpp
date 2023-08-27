#include <stdio.h>
int main()
{ char qr[20],a[20],b[20],c[20],d[20],ca[20];
  int n,i;
  FILE *f;
  f=fopen("questions.txt","a");
  printf("This prog creates a question bank.\n");
  printf("How many questions do you have?\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { printf("Enter the question root :"); gets(qr);
    printf("Enter choice a :"); gets(a);
    printf("Enter choice b :"); gets(b);
    printf("Enter choice c :"); gets(c);
    printf("Enter choice d :"); gets(d);
    printf("Enter the answer :"); gets(ca);
    fprintf(f,"%s %s %s %s %s %s\n",qr,a,b,c,d,ca);
  }
	
 fclose(f);
 	
 return 0;	
}
