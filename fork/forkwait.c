/*
 * This program will demonstrate the wait systemcall ..
 * author : Naresh
 * email  :nareshchemchem35@gmail.com
 * Date   :07-09-2021
 */

#include<stdio.h>      /*! required for printf */
#include<stdlib.h>     /*! required for exit() */
#include<sys/wait.h>   /*! required for wait() */
#include<unistd.h>     /*! required for fork() */

/* main program starts */
int main()
{
	/*! hold process ID */
	pid_t cpid;
	/*! creating child process */
	if(fork() == 0)
	{
		exit(0);     /* terminate child */
	}
	else
		/*! wating for child termination.wiat() returns terminated child process ID */
	       cpid = wait(NULL);
 printf("parent process ID: %d\n", getpid());  /* getpid-> returns the process ID */
 printf("child process ID: %d\n", cpid);       /* it prints child PID */
 return 0;
} 
