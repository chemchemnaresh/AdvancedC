# Executable and Linkable Format (ELF)

<h1> Structure of ELF file </h1>

Executable and Linkable Format, is a common standard for executable files, object code, shared libraries,core dumps.

ELF consist of two sections,

    1.ELF Header  -> it is 32 byte long and identifiers the format of a file.
    2.File data   -> it consist of three parts i.e, Program Headers,Section Headers ,Data

<h1><b1> ELF Header </h1></b>

The ELF header is 32 byte long, and identifiers the format of the file.It starts with a sequance of unique bytes called magic bytes.The header also indicates whether it is an ELF file for 32-bit or 64-bit format, uses little or big endianness, shows the ELF version etc..,the command used to get ELF header of application is <b> readelf -h prog </b>
<p align="center">
<img src= "https://th.bing.com/th/id/OIP.cD0KSawwWrSLNRnVV1DIXgHaEJ?pid=ImgDet&rs=1.png">
</p>

<b> Class : </b>
  
   After the type declaration, there is a class field defined. This value determines the architecture for the 
   file. It can be 32-bit or 64-bit architecture. The magic shows a 02,which is translated by the readelf
   command as an ELF64 file. In other words,an ELF file using 64-bit architecture.

<b> Data : </b>
  
   Next part is the Data field .it knows two options: 01 for LSB also known as littile endian.Then there is the
   value 02,for MSB known as big endian This particular value helps to interpet the remining objects correctly
   with in the file.

<b> version : </b>
  
   Next in line is another "01" in the magic,which is the version number.
   Currently, there is only 1 version type:currently, which is value "01".

<b> OS/ABI : </b>

  Each operating system has a big overlap in common functions. In addition, each of them has specific ones,
  or at least minor differences between them. The defination of the right set is done with an
  Applcation Binary Interface(ABI).

<b> ABI Version : </b>

  ABI is short for Application Binary Interface and specifies a low-level interface between the operating 
  system and a piece of executable code. When needed, a version for ABI can be specified. 

<h1> Program Header </h1>
The program header shows segments used at run-time, and tells the system how to create process image.the header from above figure shows That elf file consists of 13 program headers that have a size of 56 bytes each, the first header starts at byte 64.
The command used to get ELF program header of an application is <b> readelf -l prog </b>
<p align="<center">

</p>

<h1> Sction Header </h1>
The section headers define all the sections in the file.This is used for linking and relocation. a segment can have 0 or more sections. for executable files there are four main sections.
<p align="center">
<img src=
</p>
<b>.text:-></b> contains executable code. it will be packed into segment with read write access rights.It only loads once as the contents will not change.This can be seen with the "objdump" utility.
<br>

<b>.data:-></b> contains initilized data,with read/write access rights <br>

<b>.rodata:-></b> contains initilized data,with read access rights only <br>

<b>.bss:-></b> contains uninintilized data, with read/write access right <br>



