#include <stdio.h>

main()
{  int x[3]={5,2,8};
   int i;
   int *px;
   px=&x[0];
   for(i=0;i<3;i++)
   {
      printf("%d. array element is %d\n",i+1,*px);
      *px++;
   }
	return 0;
}

