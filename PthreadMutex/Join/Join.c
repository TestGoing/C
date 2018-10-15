#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void* assisthread(void* arg)
{
   printf("I am helping to do some jobs\n");
   sleep(3);
   printf("pthreadID:%u\n",pthread_self());
   pthread_exit(0);
}

int main()
{
   pthread_t assistthid;
   int status;
   int * p = NULL;
   p=&status;
   printf("main pthreadID:%u\n",pthread_self());
   pthread_create(&assistthid,NULL,assisthread,NULL);
   printf("create pthreadID:%u\n",assistthid);
   pthread_join(assistthid,(void**)&p);
   printf("assistthid's exit is caused %d\n",status);
}