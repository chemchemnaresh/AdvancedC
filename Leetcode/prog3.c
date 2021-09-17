/* write a program Remove duplicates from sorted list
 *
 * Given the head of sorted linked list,delete all duplicates such that each element appears only once .
 *
 * input head = [1,1,2,2,3,3]
 * output     = [1,2,3]
 *
 * author : Naresh
 * mail   : nareshchemchem35@gmail.com
 * date   : 17-09-2021
 *
 */
/* including headerfiles */
#include<stdio.h>

int removeDuplicates(int* nums, int numsSize)
{
	int i=0, j;
	for(j=0; j < numsSize; j++)
	{
		if(nums[j] != nums[i])
		{
			i++;
			nums[i] = nums[j];
		}
	}
		printf("%d,",i+1);
		return i+1;
}
/* main program */
int main()
{
	int nums[] = {1,1,2,2,3,3},k;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int i;

	printf("nums =[");
	for(i=0; i<numsSize; i++)
		printf("%d ",nums[i]);
	printf("]\n");

	k = removeDuplicates(nums, numsSize);

	printf("nums = [");
	for(i=0; i<k; i++)
		printf("%d ",nums[i]);
	printf("]\n");
}
