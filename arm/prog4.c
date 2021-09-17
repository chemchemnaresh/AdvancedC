/* program for data transfer, arithmatic,logical  operations 
 *
 * author  : Naresh
 * mail    : nareshchemchem35@gmail.com
 * date    : 17-09-2021
 */
area prgm,code readonly     /* defining logical area named prgm and the code which is readonly */
   entry  
     ldr r0,=5;     /* data transfer - r0=5 */
     ldr r1,=3      /*                 r1=3 */

     add r2,r0,r1   /* arithmatic add r2=8 (5+3) */
     sub r3,r0,r1   /*            sub r3=2 (5-3) */
     mul r4,r0,r1   /*            mul r4=F (5*3 =15 =F) */

     and r5,r0,r1   /* logical    and r5=1 (5&&3) */
     orr r6,r0,r1   /*            or  r6=7 (5||3) */
     eor r7,r0,r1   /*            xor r7=6 (5^3)  */
     
     end            /* end of the program */

