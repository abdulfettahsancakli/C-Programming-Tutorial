#include <stdio.h>


void swap(int *ap, int *bp)
{ int *temp;
  temp=ap;
  ap=bp;
  bp=temp;
}
main()
{  int a,b; 
   int *ap,*bp;
   printf("Enter two integers ");
	scanf("%d %d",&a,&b);
	ap=&a; bp=&b;
	printf("a=%d   b=%d\n",*ap,*bp);
	swap(ap,bp);
	printf("a=%d   b=%d\n",*ap,*bp);

	return 0;
}
