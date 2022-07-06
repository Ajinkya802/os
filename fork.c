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
 /* if((childPid=fork())==-1)
 {
 printf("Fork error %s\n",strerror(errno));
 exit(1);
 }
 else
 if(childPid==0)
 {
 printf("I am the child : %d\n",getpid());
 exit(0);
 }
 else
 {
 printf("I am the father : %d\n",getpid());
 exit(0);
 } */
 switch(childPid=fork()){
 case -1:
 printf("Fork error %s\n",strerror(errno));
exit(1);
 case 0:
printf("I am the child : %d\n",getpid());
 exit(0);
 default:
 printf("I am the father : %d\n",getpid());
 exit(0);
 
 }
 return 0;
}



