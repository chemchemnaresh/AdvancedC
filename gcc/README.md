**_1. -include file_**
```
     process file as if "#include "file"" appered as the first line of the primary source file. However ,the first 
     directory searched for file is tge preprocessor's working directory instead of the directory containg the main 
     source file. If not found there , it is searched for in the reminder of the  "include "..."" search chain as normal.
Ex:

/* not included in headerfile */
 int main()
 {
   int i=10;
   printf("%d\n",i);
   return 0;
 }
  Compilation : gcc -o main main.c -include stdio.h
  If -include is not used , the following error will be occurs
  main.c In function 'main':
  main.c:5:2  warning Impicit declaration of function 'printf' 
  main.c:1:1: note :include 'stdio.h' or provide a declaration of 'printf'

```


**_2. -D name_**
```
      Predefine name as macro, with defination 1.
     Ex :
      #include<stdio.h>
      int main()
      {
         printf("%d\n",CONST);  /*CONST value is declared 10 during compile time*/
         return 0;
      }
      Compilation : gcc -0 main main.c -DCONST=10
      If -DCONST is not used error will occurs
      'CONST' undeclered

```

3.-o name 
    -o is used to create a executable file
    #include<stdio.h>
    int main()
    printf("Hello\n");
    return 0;
} 
   compilation : gcc -o main main.c

4. -time
    Ex;
    #include<stdio.h>
    int main()
    {
     printf("hello\n");
     return 0;
    }
    compilation : time gcc main.c
     

5. -wrapper 
     Invoke all subcommands under a wrapper program . The name of the Wrappewr program and its parameters are passed a 
     comma specified list .
     Compilation ; gcc -c t.c -wrapper, --args

6. -c 
      compiles source file without linking
      Ex:
      #include<stdio.h>
      {
         int main()
          printf("Hello\n",);
          return o;
      }
      Compilation : gcc -c file.c
 
7.  -g
      Generates debug information to be used by GDB debugger.
      compilation : gcc -g file.c -o file
      Compiled in GDB debugger

8.  -o 
    set the compiler's optimization level
    -oo  ->  optimization for compile time 
    -o1 ->   optimization for code size and execution time.
    -o2 ->   optimization for code size and execution time.
    -o3 ->   optimization for code size and execution time.
    -os ->   optimization for code size.
    -fast5 ->o3 with fast none accurate with calculations.
   Compilation : gcc -o file.c -o file

9.-dumpversion
   print the compiler version and don't do anything else
   This is the compilation version used in file system paths and spaces.
   Compilation : gcc -dumpversion

10.  -print-prog-name
     gcc -print-prog-name=file.c path to the installation of file.
     Compilation :gcc -print-prog-name=file.c

11.  -save -temps
     store the normally temporary intermidiate file(*s,*i,*o)paramently.
     Ex:
     #include<stdio.h>
     int main()
     {
      printf("Hello\n");
     }
   compilation : gcc -o main main.c -save -temps
  
12. -v 
    print (on the standard error output) the commands executed to run the stage of compilation 
   also print the verson number of the compiler driver program and of the processor and the compiler proper.

13. -Werror 
    make all warnings into error.
    Ex:
   #include<stdio.h>
   int main()
   {
    int i;
   printf("%d\n",i);
   return 0;
  }
  Compilation : gcc -o file file.c -Werror

14. -print-searc-dirs
   Revel the directories that gcc searchs for programs and libraries.
   compilation :gcc -print-search-dirs file.c

15. -Dname predefine name as macro, with defination

    Compilation : gcc -o file file.c -Dconst=9.
