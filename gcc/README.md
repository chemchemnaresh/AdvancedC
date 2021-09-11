**GCC**

         GCC stands for GNU compiler collections which is used to compile mainly c and c++ language.
         It can also be used to compile objectives c and objective c++.The most important option required
         while compiling a source code file is the same name of the source program, rest every argument is optional
         like a warning,debugging,linking libraries,object file etc.


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

**_3.-o name_**
``` 
    -o is used to create a executable file.

Ex:   
 #include<stdio.h>
 int main()
 {
    printf("Hello\n");
    return 0;
 }
 
compilation : gcc -o main main.c
   
obseervation : A executable file main is created
```

**_4. -time_**
```

    Ex;
    #include<stdio.h>
    int main()
    {
     printf("hello\n");
     return 0;
    }

    compilation : time gcc main.c
    
    output : 
             real 0m0.350s
             user 0m0.047s
             sys  0m0.179s
```
     

**_5. -wrapper_**
``` 
     Invoke all subcommands under a wrapper program . The name of the Wrappewr program and its parameters are passed a 
     comma specified list .
     Compilation ; gcc -c t.c -wrapper, --args.
```

**_6. -c option_**
``` 
      compiles source file without linking.

      Ex:
      #include<stdio.h>
      {
         int main()
          printf("Hello\n",);
          return o;
      }
      Compilation : gcc -c file

      observation : This compilation generated file.object file
```
 
**_7.-g option_**
```
      Generates debug information to be used by GDB debugger.

 Ex:
 #include<stdio.h>
 int main()
 {
  printf("hello\n");
  return 0;
 }
      compilation : gcc -g file.c -o file
      
      Compiled in GDB debugger
```

**_8.-o_**
``` 
   set the compiler's optimization level

    -oo  ->  optimization for compile time 
    -o1 ->   optimization for code size and execution time.
    -o2 ->   optimization for code size and execution time.
    -o3 ->   optimization for code size and execution time.
    -os ->   optimization for code size.
    -fast5 ->o3 with fast none accurate with calculations.

    Compilation : gcc -o file.c -o file
```


**_9.-dumpversion_**
```
   print the compiler version and don't do anything else
   This is the compilation version used in file system paths and spaces.

   Compilation : gcc -dumpversion
```

**_10.-print-prog-name_**
```
     gcc -print-prog-name=file.c path to the installation of file.

     Compilation :gcc -print-prog-name=file.c
```

**_11.-save -temps_**
```
     store the normally temporary intermidiate file(*s,*i,*o)paramently.

     Ex:
     #include<stdio.h>
     int main()
     {
      printf("Hello\n");
     }

   compilation : gcc -o main main.c -save -temps
```
  
**_12.-version_**
``` 
    print (on the standard error output) the commands executed to run the stage of compilation 
    also print the verson number of the compiler driver program and of the processor and the compiler proper.
    compilation : gcc --version
```

**_13.-Werror_**
``` 
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
```

**_14.-print-searc-dirs_**
```
    Revel the directories that gcc searchs for programs and libraries.
    compilation :gcc -print-search-dirs file.c
```

**_15.-Dname_** 
    predefine name as macro, with defination.
  
  Ex:
  #include<stdio.h>
  int main()
  {
   printf("%d\n",CONST);
   return 0;
  } 
    If -DCONST is not used,the following errors occurs
    error : 'CONST' underdeclared(first use this function)

    Compilation : gcc -o file file.c -Dconst=9
```

**_16.-wimplicit-function-declaration_**
```
    It is gives a warning (or) error whenever a function is used before declared .This option is default in nature.
    
  Ex:
     /* no header file is declared */
     int main()
     {
      printf("Hello\n");
      return 0;
     }
    
     compilation : gcc main.c
     observation : main.c: warning: implicit declaration of function  'printf' [-wimplicit-function-declaration]
                  4| printf("hello");
```
