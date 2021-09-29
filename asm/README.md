 An embedded system has to have some form of memory to store and execute code.

<h1> Memory </h1>

 It has some specificmemory characteristics, such ashierarchy, width, and type.

<h2> 1. Hierarchy </h2>

 All computer systems have memory arranged in some form of hierarchy.

 Memory trade-offs: the fastest memory cache is physically locatednearer the ARM processor core and the 
 slowest secondary memory is set further away.

 Cache is placed between main memory and the core. It is used to speed up data transfer between the 
 processor and main memory.
 Range : 10 kb to 1 mb.

 The main memory is around 256 KB to 256 MB, depending onthe application.


 Secondarystorage is the largest and slowest form of memory
 may vary from 600 MB to 60 GB.

<h2> 2.Width </h2>

 The memory width is the number of bits the memory returns on each access—typically 8, 16, 32, or 64 bits.

 Use of thumb instructions —- If you have an uncached system using 32-bit ARM instructions and 16-bit-wide
 memorychips, then the processor will have to make two memory fetches per instruction. Each fetch requires
 two 16-bit loads. This obviously has the effect of reducing system performance,but the benefit is that 
 16-bit memory is less expensive.In contrast, if the core executes 16-bit Thumb instructions, it will 
 achieve betterperformance with a 16-bit memory.

<h2> 3.Types </h2>

 Read-only memory (ROM) is the least flexible of all memory types because it contains an image that is permanently
 set at production time and cannot be reprogrammed. Many devices also use a ROM to hold boot code.

 Flash ROM can be 1.written to as well as read, 2. It is slow to write. Its main use is for holding the device 
 firmware. The erasing and writing of flash ROM are completely software controlled.

 Dynamic random access memory (DRAM) is the most commonly used RAM for devices. It has the lowest cost per megabyte.
 DRAM is dynamic it needs to have its storage cells refreshed and given a new electronic charge every few 
 milliseconds, so you need to set up a DRAM controller before using the memory.

 Static random access memory (SRAM) is faster .The RAM does not require refreshing. The access time is shorter.
 Higher cost.

 Synchronous dynamic random access memory (SDRAM) run at much higher clock speeds and it synchronizes itself.

<h1> The RISC design philosophy </h1>

 The design philosophy aimed at delivering the following..

 simple but powerful instructions
 single cycle execution at a high clock speed
 intelligence in software rather than hardware
 provide greater flexibility on reducing the complexity of instructions.
 The ARM core uses a RISC architecture.

 The RISC philosophy is implemented with four major design rules:

 <h2> 1.Instructions </h2> 

  RISC processors have a reduced number of instruction classes. These classes provide simple operation
  that can each execute in a single cycle. The compiler or programmer synthesizes complicated operations 
  (a divide operation) by combining several simple instructions. Each instruction is a fixed length to allow the 
  pipeline to fetch future instructions before decoding the current instruction. Incontrast, in CISC processors 
  the instructions are often of variable size and take manycycles to execute.


<h2> 2.Pipeling </h2>

 The Process of fetching the next instruction while the current instruction is being executed is called 
 as “pipelining”. Pipelining is supported by the processor to increase the speed of program execution. 
 Increases throughput. Several operations take place simultaneously, rather than serially in pipelining. 
 The Pipeline has three stages fetch, decode and execute.

Ex:
        Fetch |  Decode  |  Execute |        MUL - 0x10
              |          |          |        LDR - 0xc
cycle1   ADD  |    -     |   -      |        CMP - 0x8
              |          |          |        SUB - 0x4
cycle2   SUB  |   ADD    |   -      |        ADD - 0x0
              |          |          |
cycle3   CMP  |   SUB    |   ADD    |


An embedded system has to have some form of memory to store and exec

<h2> 3.Registers </h2>

 —RISC machines have a large general-purpose register set. Any register cancontain either data or an address. 
  In contrast, CISC processors have dedicated registers for specificpurposes.

<h2> 4. Load-store architecture </h2>

 The processor operates on data held in registers. Separate loadand store instructions transfer data between the 
 register bank and external memory.In contrast, with a CISC design thedata processing operations can act on 
 memory directly.

<h1> The ARM Design Philosophy </h1>

 There are a number of physical features that have driven the ARM processor design.

 1.Small to reduce power consumption and extend battery operation
 2.High code density
 3.Price sensitive and use slow and low-cost memory devices.
 4.Reduce the area of the die taken up by the embedded processor.
 5.Hardware debug technology
 6.ARM core is not a pure RISC architecture.

<h3> Instruction Set for Embedded Systems </h3>

 The ARM instruction set differs from the pure RISC definition in several ways that make

 The ARM instruction set suitable for embedded applications:

 Variable cycle execution for certain instructions—Not every ARM instruction executes.in a single cycle. 
 For example, load-store-multiple instructions vary in the number of execution cycles depending upon the 
 number of registers being transferred.

 Inline barrel shifter leading to more complex instructions—The inline barrel shifter is a hardware 
 component that preprocesses one of the input registers before it is usedby an instruction.

 Thumb 16-bit instruction set—ARM enhanced the processor core by adding a second 16-bit instruction 
 set called Thumb that permits the ARM core to execute either 16- or 32-bit instructions.

 Conditional execution—An instruction is only executed when a specific condition has been satisfied.

 Enhanced instructions—The enhanced digital signal processor (DSP) instructions wereadded to the standard 
 ARM instruction set to support fast 16×16-bit multiplier oper- ations and saturation.
