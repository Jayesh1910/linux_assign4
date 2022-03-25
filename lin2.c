#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


void *printhello(void *threadid)
{
printf("\nhello world!\n");
while(1);
}
int main()
{
pthread_t thread;
int rc,t=0;
printf("creating thread\n");
rc=pthread_create(&thread,NULL,printhello,NULL);
printf("\n thread ID:%u",thread);
sleep(6);
t=pthread_cancel(thread);
if (t==0);
printf("\n cancelled thread\n");
printf("\n thread ID%u\n",thread);

}
