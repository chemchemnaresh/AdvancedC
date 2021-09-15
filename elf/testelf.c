/** 
 * This program is to test the given file is elf or not
 * author  : naresh
 * email   : nareshchemchem35@gmail.com
 * date    : 14-09-2021
 */

/* including headerfiles */
#include<stdio.h>     /* required for printf */
#include<stdlib.h>    /* reqired for exit() */
#include<unistd.h>    /* required for */
#include<sys/stat.h>  /* required for file opeartions */
#include<fcntl.h>     /* required for file operations */

/* main program */
int main(int argc, char *argv[])
{
	/* checking for command is passed or not */
	if(argc<2)
	{
		printf("Filename is missing ..\n");
		exit(1);
	}
	int fd,data;
	
	/* opening input file in read only mode */
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		printf("failed to open file...\n");
		exit(1);
	}
	
	/* reading first 4 bytes data from the file */
	read(fd,&data,sizeof(data));

	/*checking input file is elf or not */
	if(data == 0x464C457F)
	{
		printf("The file is ELF\n");
	}
	else
	{
		printf("The file is not ELF\n");
		
	}
	return 0;
}
	

