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

**_3. using logical and operator_**
```
Ex:
area and, code, readonly
entry 
mov r0,#03  /* ro is loaded with 3 */
mov r1,#05  /* r1 is loaded with 5 */
and r2,r1,r0 /* using and operation r0 and r1 store the result in r2 */
end

  input : r0=3  0011
          r1=5  0101

 output : r2=1  0001

```

**_4. Using logical orr operator_** 
```
Ex:
area orr, code, readonly
entry
mov r0,#03  /* r0=3 */
mov r1,#05  /* r1=5 */
orr r2,r1,r0 /* using orr operation and store the result in r2 */
end

input : r0=3 0011
        r1=5 0101

output: r2=7 0111

```

