#include <stdio.h>
#include <string.h>

main()
{ char sent[100];
  int i,k,wcount=1;
  printf("Pls enter a sentence ");
  gets(sent);
  puts(sent);
  k=strlen(sent);
  for(i=0;i<k;i++)
   { if(sent[i]==' ') wcount++;  }
   
  printf("Number of word is %d \n",wcount);
     
return 0;
}    

