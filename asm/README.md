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

<h2> Registers </h2>
<p>General-purpose registers hold either data or an address. They are identified with the
letter r prefixed to the register number.</p>

<p>used when executing applications. The processor can operate in seven different modes,
which we will introduce shortly. All the registers shown are 32 bits in size.</p>

<p>There are up to 18 active registers: 16 data registers and 2 processor status registers. The
data registers are visible to the programmer as r0 to r15.</p>

<p>The ARM processor has three registers assigned to a particular task or special function:
r13, r14, and r15. They are frequently given different labels to differentiate them from the
other registers.</p>

<img src="http://github.com/chemchemnaresh/AdvancedC/blob/main/figures/reg.png">

<h3> Stack pointer: </h3>
<p>Registerr13 is used as the stack pointer (sp) and stores the head of the stack
in the current processor mode.

<h3> Link register: </h3>
 Register r14 is called the link register (lr) and is where the core puts the return address
 whenever it calls a subroutine.or store the function return adress when an interrupt is triggered.
 For faster switching, ret address are stored in the register.

<h3 > Program counter: </h3>
Registerr15 is the program counter (pc) and contains the address of the next instruction
to be fetched by the processor.</p>

<h3> CPSR: </h3>
<p>This register is used to store context of the current mode.
context means status of arith flags, processor mode & state & interrupt status.</p>

<img src ="https://th.bing.com/th/id/R.2cf0ef7ed5a2c6f59331105aed21e0f0?rik=NXURPT5mWrytNA&riu=http%3a%2f%2fizobs.github.io%2fpicture%2farm1.png&ehk=cm%2fRww1hmtN3NGoNbU6vyK%2fDEK0yq6fXBqs1zmCI7aE%3d&risl=&pid=ImgRaw&r=0">

When an ALU operation changes the flags:

N – Negative
   is set if the result of a data processing instruction was negative.
Z – Zero
   is set if the result was zero.
C – Carry
   is set if an addition, subtraction or compare causes a result bigger than 32 bits, or is set from the output of the 
   shifter for move and logical instructions.
V – Overflow
   is set if an addition, subtraction or compare produces a signed result bigger than 31 bits.

Divided into 4 fields (each with 8-bit wide): 
- Flags : holding instruction conditions 
- Status : reserved 
- Extension : reserved 
- Control : indicate the processor mode.

<h2> Banked register </h2>
<img src = "https://ars.els-cdn.com/content/image/3-s2.0-B9781558608740500034-f02-04-9781558608740.jpg">

-There are 37 registers in the register file. 
- From those, 20 registers are called banked registers (identifed by the shading in the diagram), are hidden from a
  program at different times.
- These registers are available only when the processor is in a particular mode.  
- All processor modes except system mode have a set of associate banked registers that are a subset of the main 
  16 registers. 
- A banked register maps one-to-one onto a user mode register 
- The processor mode can be changed by a program that writes directly to the cpsr, if it has the privilege. 

<h3> Condition Execution </h3>

<p> Conditional execution controls whether or not the core will execute an instruction. Most instructions have a 
    condition attribute that determines if the core will execute it based on the setting of the condition flags</p>

<img src ="http://pds10.egloos.com/pds/200906/04/90/c0098890_4a27ab03197cc.jpg">

EX:
All ARM instructions can be executed conditionally based on the CPSR register
- Appropriate condition suffix needs to be added to the instruction
  NE - not equal, EQ - equal. CC - less than (unsigned), LT less than (signed)
Ex. CMP r0. r1
ADDNE r3, r4, r5
BCC test

=> ADDNE is executed if r0 not equal to r1
=> BCC is executed if r0 is less than r1

Most instructions have a condition attribute that determines if 
the core will execute it based on the setting of the condition 
flag. 
- The condition attribute is postfixed in the instruction 
mnemonic, which is coded into the instruction.

<h2> Processor Mode </h2>
- Processor supports 7 operating modes.
- The processor modes decides the availability of registers to the programmers.
- These processor modes provide right to access the Current Program Status Register(CPSR).  

<img src ="https://th.bing.com/th/id/R.cbd28722b36474b425b67ae03f93872e?rik=0mFiLi7YKfQWMA&riu=http%3a%2f%2fimg.blog.csdn.net%2f20160929180657511&ehk=7nAmqN69%2bG5cN1%2bl21fLg%2fHVIvj6EqP9o5PWMOjFcuY%3d&risl=&pid=ImgRaw&r=0">

Each process mode is either privileged or nonprivileged 
-Privileged mode: allows full read-write access to the cpsr 
-Nonprivileged mode: only allows to read access to the control filed in the cpsr but still allows 
 read-write access to the condition flags.

Let’s list all the processor modes and describe what it is used for:

User – It is a unprivileged mode. Under this most programs and applications run. This mode is used for normal program execution.

FIQ – Fast Interrupt Request mode
      The processor goes into this mode when a high priority(Fast) interrupt is raised. FIQ is generated externally by taking nFIQ input low and it has access to all operating system resources. 
      This can be disabled by setting F flag in CPSR.
 
IRQ – Interrupt request mode 
      The processor goes into this mode when a low priority(normal) interrupt is raised. The operating system provides this code and it has access to all operating system resources.

Supervisor – The processor enters into this mode after Reset. When a user mode program makes an SVC Assembly instruction which calls an operating system services, the program switches to this mode, 
             which allows the program to operate at a privileged level for the duration of the code.

Abort – Processor goes into this mode when there is a failed attempt to access memory.

undefined – is a user mode program tries to execute an undefined or illegal Assembly instruction then this mode is entered and the operating system can terminate the program or send it a signal.

System – This is special version of User mode. This mode allows full read write access to cpsr.

<h3> Changing mode an exception </h3>

<img src ="https://ars.els-cdn.com/content/image/3-s2.0-B9781558608740500034-f02-05-9781558608740.jpg">

1.saves cpsr to spsr of exception mode.
2.saves pc to LR of exception mode.
3.sets cpsr to exception mode.
4.sets pc to the address of exception handler.

-Copies the CPSR into the appropriate SPSR. This saves the current mode, interrupt mask, and condition flags.
-Switches state automatically if the current state does not match the instruction set used in the exception vector table.
-Changes the appropriate CPSR mode bits to:
 Change to the appropriate mode, and map in the appropriate banked out registers for that mode.
 Disable interrupts. IRQs are disabled when any exception occurs. FIQs are disabled when an FIQ occurs and on reset.
-Sets the appropriate LR to the return address.
-Sets the PC to the vector address for the exception.

<h3> Vector table </h3>

<p>An interrupt vector table (IVT) is a data structure that associates a list of interrupt handlers with a list of interrupt 
requests in a table of interrupt vectors. Each entry of the interrupt vector table, called an interrupt vector, is the 
address of an interrupt handler.</p>

<p>When an exception or interrupt occurs, the processor sets the pc to a specific memory address. The address is within a 
special address range called the vector table. The entries in the vector table are instructions that branch to specific 
routines designed to handle a particular exception or interrupt.</p>

<p>The memory map address 0x00000000 is reserved for the vector table, a set of 32-bit words. On some processors the vector 
table can be optionally located at a higher address in memory (starting at the offset 0xffff0000). Operating systems such as 
Linux and Microsoft's embedded products can take advantage of this feature.</p>

<p>When an exception or interrupt occurs, the processor suspends normal execution and starts loading instructions from the 
exception vector table. Each vector table entry contains a form of branch instruction pointing to the start 
of a specific routine</p>

<img src ="https://th.bing.com/th/id/R.c866a5fe6b7298be7c1d243f8c09d26d?rik=z6YxF4QKZJlVqg&riu=http%3a%2f%2fpds10.egloos.com%2fpds%2f200906%2f04%2f90%2fc0098890_4a27ab03197cc.jpg&ehk=Gd5k14MhbX4JFvc1Rgw1Y0i7T2djXh7VmfTzQDw8ejs%3d&risl=&pid=ImgRaw&r=0">

-Reset vector: is the location of the first instruction executed by the processor when power is applied. This instruction 
 branches to the initialization code.

-Undefined instruction vector: is used when the processor cannot decode an instruction.

-Software interrupt vector is called when you execute a SWI instruction. The SWI instruction is frequently used as the 
 mechanism to invoke an operating system routine.

-Prefetch abort vector occurs when the processor attempts to fetch an instruction from an address without the correct access 
 permissions. The actual abort occurs in the decode stage.

-Data abort vector is similar to a prefetch abort but is raised when an instruction attempts to access data memory without 
 the correct access permissions.

-Interrupt request vector: is used by external hardware to interrupt the normal execution flow of the processor. It can only 
 be raised if IRQs are not masked in the cpsr.

-Fast interrupt request vector is similar to the interrupt request but is reserved for hardware requiring faster response time  It can only be raised if FIQs are not masked in the cpsr.

<h3> ARM Pipelining : </h3>

-A Pipelining is the mechanism used by RISC(Reduced instruction set computer) processors to execute instructions.
 It is a speed up technique where multiple instructions are overlapped in exection on the processor.
-By speeding up the execution by fetching the instruction, while other instructions are being decoded and executed 
 simultaneously.
-Which in turn allows the memory system and processor to work continuously.
-The pipeline design for each  ARM family is different.

<p>Pipelining is a design technique or a process which plays an important role in increasing the efficiency of data 
processing in the processor of a computer and microcontroller. By keeping the processor in a continuous process 
of fetching, decoding and executing called (F&E cycle).   

ARM devices need pipelining because of RISC as it emphasizes on  compiler complexity. Each stage is equivalent to 
1 cycle, that is n stages = n cycles.</p>

Latency: The time taken by processor to execute an (one) instruction.

Throughput : The number of instructions execute per clock cycle.

<h3> 3Stage pipeline </h3>

<img src ="https://media.geeksforgeeks.org/wp-content/uploads/20210617113945/3stage.png">

-Fetch loads an instruction from memory.
-Decode identifies the instruction to be executed.
-Execute processes the instruction and writes the result back to the register.
-By over lapping the above stages of execution of different instructions, the speed of execution is increased.
-The pipelining allows the core to execute an instruction every cycle, which results in increased throughput.

<h3> 5Stage Pipeline </h3>

<img src ="https://media.geeksforgeeks.org/wp-content/uploads/20210617115055/5stage.png">

-Stage 1 (Instruction Fetch):
 In this stage the CPU reads instructions from the address in the memory whose value is present in the program counter.
-Stage 2 (Instruction Decode):
 In this stage, instruction is decoded and the register file is accessed to get the values from the registers used in the 
 instruction.
-Stage 3 (Instruction Execute):
 In this stage, ALU operations are performed.
-Stage 4 (Memory Access):
 In this stage, memory operands are read and written from/to the memory that is present in the instruction.
-Stage 5 (Write Back):
 In this stage, computed/fetched value is written back to the register present in the instructions.

-Because of an increase in stages and efficiency, the throughput is 10%-13% higher than ARM 7.
-Core frequency of ARM 9 is slightly higher than that of ARM 7.







