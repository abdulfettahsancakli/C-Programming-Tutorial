#include <stdio.h>
#include <stdlib.h>
int findbig(int,int);

main()
{ int a,b;
  printf("Enter two integers\n");
  scanf("%d %d",&a,&b);
  printf("Big one is %d\n",findbig(a,b));
  system("pause");
  return 0;
}    
int findbig(int x, int y)
{ printf("in function %d %d\n",x,y);
  if(x>y) return x;
    else  return y; 
}

