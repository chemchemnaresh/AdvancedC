/**
 * Given an integer array nums and an integer value. remove all occurancess of all in nums in-place.The relative pf the elements may be changed 
 *
 * If there are k elements after removing the duplicates.then the first k elements of nums shold be hold the final result.
 * Return k after placing the final result in the first k slots of nums.
 *
 * sample input and output:
 * input : nums = [3,2,2,3], val = 3
 * output: nums = [2,2,_,_]
 *
 * author  : Naresh
 * emial   : nareshchemchem35@gmail.com
 * date    :  16-09-2021
 *
 */

/* include header files */
#include<stdio.h>

/* remove element using this fuction */
int removeElement(int *nums, int numsSize, int val)
{
	int i,j;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i] == val)
		{
	           for(j=i;j<numsSize-1;j++)
		   {
			   nums[j] = nums[j+1];
		   }
		   numsSize--;
		   i = i-1;
		}
	}
	return numsSize;
}
/* main program */
int main()
{
	int k,i,val=3;
	int nums[] = {3,2,2,3};
	int numsSize = sizeof(nums)/4;
	printf("Input nums : = ");
	for(i=0;i<numsSize;i++)
	{
		printf("%d ",nums[i]);
	}
	printf("\n");

	k = removeElement(nums,numsSize,val);

	printf("output: nums = ");
        for(i=0;i<k;i++)
	{
	  printf("%d ",nums[i]);
        }
        printf("\n");
  
       return 0;
}       
