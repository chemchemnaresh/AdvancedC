 An embedded system has to have some form of memory to store and execute code.

<h1> Memory </h1>
<p>An embededde system has to have some form of memory to store and excute code. You have to compare price, performance, and power consumption when deciding upon specific memory characteristics, such as hierarchy, width, and type.</p>

 
<h2> 1. Hierarchy </h2>

 <p>All computer systems have memory arranged in some form of hierarchy.
 Memory trade-offs: the fastest memory cache is physically locatednearer the ARM processor core and the 
 slowest secondary memory is set further away.
 Cache is placed between main memory and the core. It is used to speed up data transfer between the 
 processor and main memory.
 Range : 10 kb to 1 mb.
 The main memory is around 256 KB to 256 MB, depending onthe application.
 Secondarystorage is the largest and slowest form of memory
 may vary from 600 MB to 60 GB.</p>

<h2> 2.Width </h2>
 <p>The memory width is the number of bits the memory returns on each access—typically 8, 16, 32, or 64 bits.

 Use of thumb instructions: If you have an uncached system using 32-bit ARM instructions and 16-bit-wide
 memorychips, then the processor will have to make two memory fetches per instruction. Each fetch requires
 two 16-bit loads. This obviously has the effect of reducing system performance,but the benefit is that 
 16-bit memory is less expensive.In contrast, if the core executes 16-bit Thumb instructions, it will 
 achieve betterperformance with a 16-bit memory.</p>

<h2>Cache Memory</h2>
<p>Cache memory is a high-speed memory, which is small in size but faster than the main memory (RAM). The CPU can access it more quickly than the primary memory. So, it is used to synchronize with high-speed CPU and to improve its performance.</p>
<p>Cache memory can only be accessed by CPU. It can be a reserved part of the main memory or a storage device outside the CPU. It holds the data and programs which are frequently used by the CPU. So, it makes sure that the data is instantly available for CPU whenever the CPU needs this data. In other words, if the CPU finds the required data or instructions in the cache memory, it doesn't need to access the primary memory (RAM). Thus, by acting as a buffer between RAM and CPU, it speeds up the system performance.</p>
<h2>Types of Cache Memory:</h2>
<p align="center">
<img src="https://github.com/chemchemnaresh/AdvancedC/blob/main/figures/cachetypes.jpg">
</p>
<p><b>L1:</b> It is the first level of cache memory, which is called Level 1 cache or L1 cache. In this type of cache 
memory, a small amount of memory is present inside the CPU itself. If a CPU has four cores (quad core cpu), then each 
core will have its own level 1 cache. As this memory is present in the CPU, it can work at the same speed as of the CPU.The size of this memory ranges from 2KB to 64 KB. The L1 cache further has two types of caches: Instruction cache, 
which stores instructions required by the CPU, and the data cache that stores the data required by the CPU.</p>
<p><b>L2:</b> This cache is known as Level 2 cache or L2 cache. This level 2 cache may be inside the CPU or outside the CPU. All the cores of a CPU can have their own separate level 2 cache, or they can share one L2 cache among themselves. In case it is outside the CPU, it is connected with the CPU with a very high-speed bus. The memory size of this cache is in the range of 256 KB to the512 KB. In terms of speed, they are slower than the L1 cache.</p>
<p><b>L3:</b> It is known as Level 3 cache or L3 cache. This cache is not present in all the processors; some high-end processors may have this type of cache. This cache is used to enhance the performance of Level 1 and Level 2 cache. It is located outside the CPU and is shared by all the cores of a CPU. Its memory size ranges from 1 MB to 8 MB. Although it is slower than L1 and L2 cache, it is faster than Random Access Memory (RAM).</p>

<h2> 3.Types of memory </h2>

<h3> Read only memory </h3>
 <p>Read-only memory (ROM) is the least flexible of all memory types because it contains an image that is permanently
 set at production time and cannot be reprogrammed. Many devices also use a ROM to hold boot code.</p>

<h3> Flash Rom </h3>
<p> Flash ROM can be 1.written to as well as read, 2. It is slow to write. Its main use is for holding the device 
 firmware. The erasing and writing of flash ROM are completely software controlled.</p>

<h3> DRAM </h3>
<p> Dynamic random access memory (DRAM) is the most commonly used RAM for devices. It has the lowest cost per megabyte.
 DRAM is dynamic it needs to have its storage cells refreshed and given a new electronic charge every few 
 milliseconds, so you need to set up a DRAM controller before using the memory.

 Static random access memory (SRAM) is faster .The RAM does not require refreshing. The access time is shorter.
 Higher cost.

 Synchronous dynamic random access memory (SDRAM) run at much higher clock speeds and it synchronizes itself.</p>

<h3>SRAM</h3>
<p>Static random access memory (SRAM) is faster than the DRAM, but requires more silicon area. SRAM does not require refreshing. The access time for SRAM is shorter than the DRAM because SRAM does not require a pause between data accesses. It is mostly used as caches.</p>

<h3>SDRAM</h3>
<p>Synchronous dynamic random access memory (SDRAM) is dynamic random access memory (DRAM) with an interface synchronous with the system bus carrying data between the CPU and the memory controller hub. SDRAM has a rapidly responding synchronous interface, which is in sync with the system bus. SDRAM waits for the clock signal before it responds to control inputs.</p>


<h2> The RISC design philosophy </h2>

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

<p> The Process of fetching the next instruction while the current instruction is being executed is called 
 as “pipelining”. Pipelining is supported by the processor to increase the speed of program execution. 
 Increases throughput. Several operations take place simultaneously, rather than serially in pipelining. 
 The Pipeline has three stages fetch, decode and execute.</p>

<p align="center">
<img src="http://github.com/chemchemnaresh/AdvancedC/blob/main/figures/pipeline.png">
</p>

<h2> 3.Registers </h2>

 <p>RISC machines have a large general-purpose register set. Any register cancontain either data or an address. 
  In contrast, CISC processors have dedicated registers for specificpurposes.</p>

<h2> 4. Load-store architecture </h2>

<p> The processor operates on data held in registers. Separate loadand store instructions transfer data between the 
 register bank and external memory.In contrast, with a CISC design thedata processing operations can act on 
 memory directly.</p>

<h1> The ARM Design Philosophy </h1>

<p> There are a number of physical features that have driven the ARM processor design.

  1.Small to reduce power consumption and extend battery operation
  2.High code density
  3.Price sensitive and use slow and low-cost memory devices.
  4.Reduce the area of the die taken up by the embedded processor.
  5.Hardware debug technology
  6.ARM core is not a pure RISC architecture.</p>

<h3> Instruction Set for Embedded Systems </h3>

<p> The ARM instruction set differs from the pure RISC definition in several ways that make

 The ARM instruction set suitable for embedded applications:

 Variable cycle execution for certain instructions—Not every ARM instruction executes.in a single cycle. 
 For example, load-store-multiple instructions vary in the number of execution cycles depending upon the 
 number of registers being transferred.

 Inline barrel shifter leading to more complex instructions—The inline barrel shifter is a hardware 
 component that preprocesses one of the input registers before it is usedby an instruction.

 Thumb 16-bit instruction set—ARM enhanced the processor core by adding a second 16-bit instruction 
 set called Thumb that permits the ARM core to execute either 16- or 32-bit instructions.

 Conditional execution—An instruction is only executed when a specific condition has been satisfied.</p>

 Enhanced instructions—The enhanced digital signal processor (DSP) instructions wereadded to the standard 
 ARM instruction set to support fast 16×16-bit multiplier oper- ations and saturation.
