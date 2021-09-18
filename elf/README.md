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
 
<b> ELF Header </b>

The ELF header is declared by the type elf32_hdr or elf64_hdr:

<img src ="https://hydrasky.com/wp-content/uploads/2018/10/Capture03102.png">

<i> e_ident </i>

    This array of bytes specifies how to interrupt the file, independent of the processor or the files remining contents    with in this array everything is named by macro,which starts with prefix EI_ and prefix ELF_.
 
 The following macros are defined :

<i> e_type </i> - This member of the structure identifies the the object file type :
    
   ET_NONE  -  An unknown type 
   ET_REL   - A relocatble file
   ET_EXEC  - A executable file
   ET_DYN   - A shared object
   ET_CORE  - A core file

<i> e_machine </i>  - This member specifies the required architecture for individual file.

   EM_NONE  - An unknown type 
   EM_386   - Intel 80386

<i> e_entry </i>

    This member gives the virtual adress to which the system first transfer control, thus starting process.
    If the file has no assosiated entry point,This member holds zero/

<i> e_version </i> - This member identifies the file version

   EV_NONE 0  -  Invalid version
   EV_CURRENT -  current version

<i>e_shoff </i>
        
        This members holds the section header table's file offset in bytes .In the file no sectio header table,
        this member holds to zero.

<i> e_flags </i>
     
       This member holds processor_specific flags with the file.Flag names take the form
       EF_'machine _falg'. no flag have been defined.

<i> e_ehsize </i>

    This member holds the ELF header's size in byte.

<i> e_phnum </i>

      This member holds the number of entries in the program header table. Thus the product of e_phentsize and
      e_phnum gives the tables size in bytes.


<h1> Program Header </h1>
The program header shows segments used at run-time, and tells the system how to create process image.the header from above figure shows That elf file consists of 13 program headers that have a size of 56 bytes each, the first header starts at byte 64.
The command used to get ELF program header of an application is <b> readelf -l prog </b>
<p align="<center">
<img src = "https://th.bing.com/th/id/R.56f71464b335439e4cbd3c735f945ee5?rik=0PvJljNY%2fOqAew&riu=http%3a%2f%2flinux-audit.com%2fwp-content%2fuploads%2f2015%2f08%2felf-program-headers-segments.png&ehk=T6fSq3tbnK0S1Fn1f2ArXBe%2f%2fZiRSsncNC1YSWEEw6Y%3d&risl=&pid=ImgRaw&r=0.png">
</p>

<b>GNU_EH_FRAME:-></b>This is stored queue used by the GNU C compiler(gcc).It stores the exception handler <b>

<b>GNU_STACK:-></b>This header is store stack information <b>

<b>GNU_RELRO:-></b>This segment indicates the memory region which shold be made READ-ONLY after relaction is done <b>

<b>INTERP:-></b>for dynamic binaries ,this holds the full pathname for runtime linker id <b>

<b>LOAD:-></b>Loadble program segment.only segment of this type are loaded into memory during execution <b>

<b>NOTE:-></b>Auxilary information. for core dumps this segment contains the status of the process <b>

<b>DYNAMIC:-></b>for dynamic binaries,this segment hold dynamic linkinginformation <b>

<h1> Sction Header </h1>
The section headers define all the sections in the file.This is used for linking and relocation. a segment can have 0 or more sections. for executable files there are four main sections.
<p align="center">
<img src="https://miro.medium.com/max/552/1*uNbNzYP2wFKWg2AdLBx51Q.png">
</p>

<b>.text:-></b> contains executable code. it will be packed into segment with read write access rights.It only loads 
   once as the contents will not change.This can be seen with the "objdump" utility.<br>

<b>.data:-></b> contains initilized data,with read/write access rights <br>

<b>.rodata:-></b> contains initilized data,with read access rights only <br>

<b>.bss:-></b> contains uninintilized data, with read/write access right <br>

<b>.comment:-></b>This section holds version control information <br>

<b>.note.GNU-stack:-></b>This section is used in Linux object file for declaring stack attributes <br />

<b>.shstrtab:-></b>This section holds the section:wq
 names.This section is of type SHT_STRTAB <br />

<b>.dynamic:-></b>This section holds dynamic linking information.The section's attributes will include the SHF_ALLOC 
   bit <br />

<b>.hash:-></b>This section holds a symbol has table.This section is of type SHT_HASH.The attribute used is SHF_ALLOC <br />

<b>.dynsym:-></b>This section holds the dynamic linking symbol data  <br />
 
<b>.got:-></b>This section holds the globel offset table.the attributes are processor-specific <br />

<b>.dynstr:-></b> This section holds a string needed for dynamic linking,most commonly the strings that represent the names assosiated with symbol tale entries. <br />

<b>.interp:-></b> This section holds the pathname of a program interpreter. <br />

<b>.init:-> </b> This section holds executable instructions the contributes the process intilization code.when a program starts to run,the system executes the code in section  <br />

<h3> consider the following program as example </h3>
<p align="center">
<img src="https://github.com/chemchemnaresh/AdvancedC/blob/main/figures/des.1.png">
</p>

<h3> The intilized globel static, local static and globel varibles stored in .data section </h3>
<h3> The unintilized globel,local static varibles are stored in .bss section </h3>
<p align="center">
<img src="https://github.com/chemchemnaresh/AdvancedC/blob/main/figures/des.png">
</p>

<h2> testelf.c </h2>

This file contains the program to check file is ELF or not. --<a href="https://github.com/chemchemnaresh/AdvancedC/blob/main/elf/testelf.c">code</a>

