/* This program shows, a file is opened and read when it is in child process in the fork()systemcall.
 *
 * Email :nareshchemchem35@gmail.com
 * Date : 02-09-2021
 * Author : Naresh
 */
#include<stdio.h>        /*it is required for printf */
#include<unistd.h>       /*it is required for fork() */
#include<sys/types.h>    /*it is required for fork() */
#include<fcntl.h>        /*it is required to manipulate file descriptor */

/* main program */
int main()
{
	pid_t pid;   /* pid_t is signed integer type which is capble of representing a process ID */
	int fd=0;
	char buff[256];
	fd=open("./testfile",O_RDONLY);  /*test file in opened in READ mode*/

	pid=fork();               /* fork is assigned to signed integer pid */
	if(pid < 0){
	
	printf("Failed to fork..\n");
	}	else if(pid == 0)        /*pid == 0 ,file date is read */
	{
		printf("child process...\n");   /* child process is printed */
		read(fd,buff,sizeof(buff));   /* read from a file descriptor */
		printf("Data = %s\n",buff);     /*Data is printed from char buff */
	}
	else if(pid > 0)
		printf("parent process....\n");  /* when pid>0  parent is executed */
	sleep(2);   /* sleep for 2 seconds */
	return 0;
}
