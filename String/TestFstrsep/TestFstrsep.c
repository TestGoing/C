#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
   char str[] = "root:x::0:root:/root:/bin/bash:";
   char* buf;
   char* token;
   buf = str;
   while ((token =strsep(&buf,":"))!=NULL)
   {
      printf("%s\n",token);
      printf("%p\n",buf);
   }
   return 0;
}
