/*
 * Input: The inpit consist of three spaces seperated integers- input1,input2,input3 representing the three four digit 
   numbers
output: print an integer representing the concatination of four digits
Example:
input: 3521 2452 1352
output: 1522

author : Naresh
mail   : nareshchemchem35@gmail.com
data   : 30-09-2021
*/




/* include header files */
#include<stdio.h>   /* required for printf() scanf()  */

/*   This function is for finding the power of 10 */
int power(int a,int b)
{
	int val = 1;
	if(b==0)
	{
		return 1;
	}
	while(b)
	{
		val = val *a;
		b--;
	}
	return val;
}

/* main program starts */
int main()
{
	int input[3],result=0,i,j,a;
	printf("Enter the input numbers: ");
				
	for(i=0;i<3;i++)
	{			
		scanf("%d",&input[i]);									
	}
	
	for(i=0;i<4;i++)
	{
		a = 0;
		if(i%2 == 0)
		{
			for(j=0;j<3;j++)								
			{											
				if(a<(input[j]%10))
				{
					a = input[j]%10;
				}
				input[j] = input[j]/10;
			}
			result = a*power(10,i)+ result;
		}
		else
		{
			a = input[0]%10;
			input[0] = input[0]/10;
			for(j=1;j<3;j++)
			{
				if(a>(input[j]%10))
				{
					a = input[j]%10;
				}
				input[j] = input[j]/10;
			}	
			result = a*power(10,i) + result;
		}
	}
															
	printf("result: %d\n",result);
	return 0;
}

		
