#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getmemory(char * p)
{
   p=(char*)malloc(100);
   strcpy(p,"helloword");
   return p;
}

int main()
{
   char* str = NULL;
   str=getmemory(str);
   printf("%s",str);
   free(str);
   getchar();
   return 0;
}