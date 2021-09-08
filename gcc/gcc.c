/* 1.-includefile */
   processor file as if "#include "file"" appered as the first line of the primary source file.However the first
   directory searched for the file is the processor's  working directory instead of the directory containing the 
   main source file . IF not found there, it is searched for in the reminder of the "#include ".."" search chain
   as normal.
   EX :
   /*  header file is not included */
   int main()
       
   {
	   int i=10;
	   printf("%d ",i);
	   return 0;
   }
     Compilation :gcc -o main main.c -include stdio.h
     If not used in -include stdio.h, error will come
     main.c In function 'main': 
