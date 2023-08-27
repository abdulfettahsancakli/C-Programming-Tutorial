#include <stdio.h>
int main()
{  
  int y,x=24;
  char h='a';
  char *ph;
  int *p,*t;
  p=&x; ph=&h;
  printf("x=%d p=%d h=%c\n",x,p,h);
  printf("x=%d *p=%d *ph=%c\n",x,*p,*ph);	
  printf("x=%d p=%d ph=%d\n",x,p,ph);
  p++;  ph++;
  printf("x=%d p=%d ph=%d\n",x,p,ph);
  	
	return 0;
}
