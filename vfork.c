#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
 
 int main()
{
pid_t childPid;
 if((childPid=vfork())==-1)
 {
 printf("Fork error %s\n",strerror(errno));
 exit(1);
 }
 else
 if(childPid==0) //Subprocess
 {
 sleep(1); //Subprocess sleep for one second
 printf("I am the child : %d\n",getpid());
 exit(0);
 }
 else //Parent process
 {
 printf("I am the father : %d\n",getpid());
 exit(0);
 }
 /* switch(childPid=vfork()){
 case -1:
 printf("Fork error %s\n",strerror(errno));
 exit(1);
 case 0: //Subprocess
 sleep(1); //Subprocess sleep for one second
 printf("I am the child : %d\n",getpid());
 exit(0);
 default: //Parent process
 printf("I am the father : %d\n",getpid());
 exit(0);
}
eturn 0;
}

