/*Write a program called setupClass; this program creates a directory structure for all of your files associated with
 * the exercises, assignments, and tests.
 *
 * author : Naresh
 * Email  : nareshchemchem35@gmail.com
 * Date   : 01-10-2021
 */

/* Header files required for printf,stat,access,mkdir,chdir */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<errno.h>

/* creating a new Directory */
void create(char *dir, mode_t mode)
{
	char path[100], *p;
	size_t len;	                /* size of length */

	strncpy(path, dir, sizeof(path));
	path[sizeof(path) - 1] = '\0';	/* Last character as NULL character */
	len = strlen(path);		/* length of the path */
							
	if(len == 0)
		return;
	else if(path[len-1] == '/')
		path[len-1] = '\0';
	for(p = path; *p; p++)		/* creating a directory or sub-directory */
		if(*p == '/')														{																*p = '\0';
			if(access(path, F_OK))
				mkdir(path, mode);
			*p = '/';
		}
	if(access(path, F_OK))		/* create a directory when it has a access */
		mkdir(path, mode);
}
 
  /* main program */
int main(int argc, char **argv)
{
	char root[100] = "sysProg", buf[100];
	struct stat s;			/* directory file structure */
	int count;

	if(argc > 1)
		strcpy(root, argv[1]);	/* copying argv[1] to root */

	if(stat(root, &s) == 0)		/* if structure already exists */
	{
		printf("Already exists\n");
		exit(EXIT_FAILURE);
	}

	create(root, 0755);	        /* creating root directory */
	chdir(root);		        /* entering the root directory */
								
	mkdir("test",0755);		/* creating test directory */								for(count = 0; count < 3; count++)
	{											
		sprintf(buf, "test/test%d",count+1);	/* creating 3 test sub directories */
		create(buf, 0755);
	}

	mkdir("exercise",0755);    	/* creating exercise directory */
	for(count=0; count < 5; count++)
	{
		sprintf(buf, "exercise/exer%d",count+1); /* creating 5 exer sub directories */
		create(buf, 0755);
	}

	mkdir("program",0755);	        /* creating program directory */
	for(count=0; count<10;count++)
	{
		sprintf(buf, "program/prog%d",count+1);	 /* creating 10 prog sub directories */						create(buf, 0755);
	}

			return 0;
}

