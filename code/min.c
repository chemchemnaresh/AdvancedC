#include<stdio.h>
#include<stdlib.h>

struct node {
	int *num;
	struct node *next;
};

int min(struct node **ptr){
	struct node *temp = *ptr;
	int min = *temp->num;
	temp= temp->next;
	while(temp)
	{
		if(*temp->num <min)
		{
			min = *temp->num;
		}
		temp = temp->next;

	}
	return min;
}

int main()
{
	int x=258, y=207, z=209;
	struct node n1, n2, n3;
	struct node *ptr = &n1;
	n1.num = &x;
	n1.next = &n2;
	n2.num = &y;
	n2.next = &n3;
	n3.num = &z;
	n3.next = NULL;

	printf("%d\n", min(&ptr));
	return 0;
}
