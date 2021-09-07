/* This program shows how many times "Hello" is printed
 * Email : nareshchemchem35@gmail.com
 * Date : 02-09-2021
 * author : Naresh
 */
 #include<stdio.h>         /* required for printf */
 #include<sys/types.h>     /* required for fork() */
 #include<unistd.h>        /* requied for fork() */

/* main program */
int main()
 {	
/* for every fork process a child process is created by parent process.
 * Execution of fork() can be found using the formula "2^n".
 * There are 3 fork() system calls 2^3=8 times "hello" is printed.
 */
  fork();
  fork();
  fork();
  printf("Hello\n");  /* Hello is printed 8 times */
  return 0;
  }
