/* program to  find sum of first ten integers 
 *
 * author  : Naresh
 * mail    : nareshchemchem35@gmail.com
 * date    : 16-09-2021
 *
 */

area large,code,readonly

 entry
          mov r0,#10    /* count 10 integer numbers */
	  mov r1,#0     /* partial sum */
	  mov r2,#1     /* first sum  */

next      add r1,r1,r2  /* add partial sum with first number */
          add r2,#1     /* updated next integer number */
	  subs r0,#1    /* decrement the counter */\
          bne next      /* if count not equal to zero then repeat */
	  ldr r3,res    /* get the adress of result */
	  str r1,[r3]   /* store  the result [final sum] */
	  b   b1        /* stop */

res       dcd 0x40000000
          end

	  input : 1 2 3 4 5 6 7 8 9 10  [10 integers]
	  output: 55d=0x37 comes on register r1 

