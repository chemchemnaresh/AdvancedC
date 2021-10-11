#include<stdio.h>
#include<string.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>

/* main program */
int main()
{
	pid_t cpid;	/* hold the process id */
	int num, status, i, k, avg = 0;
	char fname[256];

	FILE *fp;

	cpid = fork();  /* creating child process */

	if(cpid == 0)
	{
		char *arg[] = {"myRand",NULL};
		execl("./myRand",arg);    /* replacing the child process with myRand process */
	}
	else
	{
		wait(&status);
		k = WEXITSTATUS(status); /* converting the status returned by child process */	
	}

        sprintf(fname, "data%d.dat",k);

	fp = fopen(fname, "r");         /* open a file in read mode */

	if(fp == NULL)
	{
		printf("Error : File does not exist\n");
		exit(0);
	}
	
	for(i=0; i<60; i++)            /* reading data from the file */
	{
		fscanf(fp, "%d",&num);
		printf("%d ",num);
		avg += num;
	}

	printf("\nAverage : %d\n",avg/60); /* printig avarage values */
	fclose(fp); /* close the file */
	return 0;
}
