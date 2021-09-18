/* program to find largest of a number
 *
 * author : Naresh
 * email   : nareshchemchem35@gmail.com
 * date    : 18-09-2021
 */
area large, code,readonly
entry
        mov r5,#06     /* counter value */
        mov r1,#0x40000000   /* start of data memory */
        mov r2,#0x4000001c   /* result location */
        ldr r3,[r1]          /*  get first data */
loop    add r1,r1,#04        /* memory pointer update for next number */
        ldr r4,[r1]          /* get next number */
	cmp r3,r4            /* com[are first value with second number */
	bh1,loop1
	mov r3,r4            /*result in r3 */


loop1  subs r5,r5,#01       /* decrement counter */
       cmp r5,#00
       bne loop             /* all numbers checked , no, loop back */
       str r3,[r2]          /* result in r3 */
       end
