/* program to find factorial of given number 
 *
 *ex input : 4!
 *  output : 4!=4*3*2*1=24d=0x18
 *
 * autjor  : Naresh
 * mail    : nareshchemchem35@gmail.com
 * data     : 16-09-2021
 */
area factorial, code , readonly 
         entry
         ldr r0,memory   /* get the adress of memory */
	 ldrb r1,r[0]    /* read input */
	 mov r2,#1       /*  intial result (0!=-1) */
	 cmp r1,#0       /*  check for 0 */
	 beq store       /*   if input is 0 store 1 as result */
	 mov r2,r1       /* store input in r2 */
up       add r1,r1,#-1   /* decrement inpu by and store in r1 */
         cmp r1,#0       /* check for 0 */
	 beq store       /* if it is 0 store the result */
         mul r3,r2,r1    /* r2*n, r1*n-1,r3<--r2*r1 */
	 mov r2,r3       /* store the partial product in r2 */
	 b up            /* repeat */
store    ldr r0,result
         str r2,[r0]    /* store the result */
here	 b here
 
memory  dcd 0x400000000    /* memory location for input */
result  dcd 0x400000004    /* memory location for output */
        end
