/* write a program to compute 6x^2-9x+2 for given x x=7
 *
 * author : Naresh
 * email  : nareshchemchem35@gmail.com
 * date   : 17-09-2021
 * */
Ex: 
area qyadratic,code,readonly
           entry
	   mov r0,#7     /* x=7 */
	   mul r1,r0,r0  /* r1=x^2=49 in dec , hex=31 */
	   mov r2,#6     /* r2=6 */
	   mul r3,r1,r2  /* 6x^2=6*49 294 dec ,hex=126 */
	   mov r4,#9     /* r4=9 */
	   mul r5,r4,r0  /* r5 9x7=63 dec , hex=3f */
	   sub r6,r3,r5  /*r6=r3-r5=126-3f=e7 */
	   add r7,r6,#2  /*r7=r6+2=e7+2=e9 */
stop       b stop   
           end

	   input : 6x^2-9x+2, x=7
steps for output : r0 = 0x00000007
                   r1 = 0x00000031
		   r2 = 0x00000006
		   r3 = 0x00000126
		   r4 = 0x00000009
		   r5 = 0x0000003f
		   r6 = 0x000000e7
		   r7 = 0x000000e9
           
