1. -include file
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

