Dynamic library:
  It helps in Dynamic linking i.e,. dynamic load time linking and dynamic run time linking .Another name is 
  "shared object" or "DLL files" in windows .when the linker is dynamically linking with Dynamic libraries
  and required function Definations are not copied to executable file. Thus Executable file size is less.
  
  Steps to create Dynamic Libraries :
  -PIC(position Independent Code) is commonly used for shared libraries , so that the same library code can be loaded
  commands to create PIC object file
  gcc -c -fpic add.c
  gcc -c -fpic sub.c
  gcc -c -fpic print.c
  -The command to create to dynamic library is 
   gcc -dynamic -o libabc.so add.o sub.o print.o
  
  -Then the file command result shows
   $file libabc.so
  
  -Now linking the own dynamic library,
   cc main.c ./libabc.so main  main is the executable file
 
  ldd-> used to know the dependencies.


  Following benfites using The Dynamic library:
  -whenever our library upgrated we automatically get the new version.
  -we don't have copy files between projects.
  -We dont have to remember to compile in the library,just include it.. 
