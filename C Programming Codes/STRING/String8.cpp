#include <stdio.h>
#include <string.h>

main()
{ char sent[100];
  int i,k,andcount=0;
  printf("Pls enter a sentence ");
  gets(sent);
  puts(sent);
  k=strlen(sent);
  for(i=0;i<k-5;i++)
   { if(sent[i]==' ')
     { if(sent[i+1]=='a')
       { if(sent[i+2]=='n')
         { if(sent[i+3]=='d')
           { if(sent[i+4]==' ')
               andcount++;
		   }
		 }
	   }
	}   
   }
   
  printf("Number of and is %d \n",andcount);
     
return 0;
}    

