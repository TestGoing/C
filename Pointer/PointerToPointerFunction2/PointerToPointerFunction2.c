/*
https://blog.csdn.net/oqqHuTu12345678/article/details/60962223
thank you
 */
#include <stdio.h>
#include <stdlib.h>

int find (char *s, char src, char ** rt)
{
   int i = 0;
   while(*(s+i))
   {
      if(*(s+i) == src)
      {
         *rt=s+i;
      }
      i++;
   }

   return 0;
}

int main (void)
{
   char a[20]="helloworld";
   char *p = NULL;
   find(a,'w',&p);
   printf("%s\n",p);
   getchar();
   getchar();
   return 0;
}