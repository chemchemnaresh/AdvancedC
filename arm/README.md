**ARM Assembly Language**

              Describes the use of few basic assembly language instructions and the use of macros.

              Syntax: Label opcode operand ; comment
              init    mov    r0,#15        ;  r0=15
              
              Label  - optinal,used to find the position current instruction in memory.
              Opcode - Specifies processor operation to perform.
              Operand- Specifies source/destination of data to be processed by opcode.
              Comment_ Optinal,used to explain code meaning.


**Basic programs**

**_1. adding two numbers_**
```
Ex:  
area add, code, readonly
entry          /* start the code */
mov r0,#0x03  /* r0 is loaded with 3 */ 
mov r1,#0x02  /* r1 loaded with 2 */
add r2,r1,r0  /* add r0 and r1 store the result in r2 */       
end           /* end the code */

    input  : r0 = 0x00000003
             r1 = 0x00000002
    
    output : r2 = 0x00000005

```

**_2. subtract two numbers_**
```
Ex:
area sub, code, readonly
entry
mov r0,#0x03 /* r0 is loaded with 3 */
mov r1,#0x02 /* r1 is loaded with 2 */
sub r2,r1,r0 /* subtract ro and r1 store the result in r2 */
end

   input : r0=0x00000003
           r1=0x00000002

   output: r2=0x00000001

```

