<h1>Dynamic Library</h1>

  It helps in Dynamic linking i.e,. dynamic load time linking and dynamic run time linking .Another name is 
  "shared object" or "DLL files" in windows .when the linker is dynamically linking with Dynamic libraries
  and required function Definations are not copied to executable file. Thus Executable file size is less.
  
Steps to create Dynamic Libraries:
```
 1. PIC(position Independent Code) is commonly used for shared libraries , so that the same library code can be loaded
    commands to create PIC object file
     gcc -c -fpic add.c
     gcc -c -fpic sub.c
     gcc -c -fpic print.c

    This will give you .o object files.

 2.The command to create to dynamic library is 
           gcc -dynamic -o libabc.so add.o sub.o print.o
  
 3.Then the file command result shows
   $file libabc.so
  
 4.Now linking the own dynamic library,
   cc main.c ./libabc.so main  main is the executable file
 
 5.  ldd-> used to know the dependencies.

 6.ls -h -> To show the total sized occupied by the Dynamic library.
```

Following benfites using The Dynamic library:
```
  -whenever our library upgrated we automatically get the new version.
  -we don't have copy files between projects.
  -We dont have to remember to compile in the library,just include it..
```

<h1> LD_LIBRARY_PATH </h1>

By default the linker search for libraries in stadard path.if our libraries present in non standard path.
The environment varible <b> LD_LIBRARY_PATH</b> tells the linker to search for libraries in path
initilized to <b>LD_LIBRARY_PATH</b>.

<b> step1:</b> telling gcc where to find the shared library <br />
           <b> gcc -L/home/naresh -o hello hello.c -ldisplay </b>

<b> step2: </b> Making library avilable at run time using <b>LD_LIBRARY_PATH</b> <br />
           <b>export LD_LIBRARY_PATH=/home/naresh </b>

<b> step3: </b> run the program <br />
           <b> ./prog </b>


<h1>display.c </h1>
This file contains the source file of library function.  --<a href="https://github.com/chemchemnaresh/AdvancedC/tree/main/Dynamic/display.c">code</a>

<h1>hello.c </h1>
this file contains the program that uses the shared library  --<a href="https://github.com/chemchemnaresh/AdvancedC/tree/main/Dynamic/hello.c".code</a>
