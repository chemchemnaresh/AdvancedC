/* Given a fixed lenth array , duplicating each occurance of zero, shifting remining elements to right
 *
 * input : arr = [1,0,2,3,0,4,5,0]
 * output : [1,0,0,2,3,0,0,4]
 *
 *After calling the function, the input array is modified
 *
 * author : Naresh
 * email  : nareshchemchem35@gmail.com
 * date   : 17-09-2021
 */
  /* include header file */
#include<stdio.h>

/* duplication function */
int duplicateZeros(int *arr, int size)
{
	int i,j;
	for(i=0; i<size; i++)
	{
		if(arr[i] == 0)
		{
			for(j = size-1; j>i; j--)
			{
				arr[j] = arr[j-1];
			}
			i++; /* pointing to next element */
		}
	}
}

/* main program */
int main ()
{
	int arr[] = {1,0,2,3,0,4,5,0};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	printf(" input arr= ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]); /* input array */
	}
	printf("\n");

	duplicateZeros(arr,size); 

	printf("output arr= ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

