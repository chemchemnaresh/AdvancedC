/* Thisprogram will remove the nodes with particular value the linked list
 * Ex :1  2  3  4  5  1
 * val : 1
 * output : 2 3 4 5
 *
 * author : Naresh
 * email  : nareshchemchem35@gmail.com
 * date   : 18-09-2021
 */

  #include<stdio.h>   /*required for printf */
  #include<stdlib.h>  /* required for malloc() */

/* linkedlist node structure */
 typedef struct node{
	 int data;
	 struct node *next;
 }NODE;
/* This function will add a new node at last */
NODE *add_node(NODE *head,int val)
{
	NODE *new = (NODE *)malloc(sizeof(NODE));
	new->data = val;
	new->next = NULL;

	NODE *temp = head;

	if(temp == NULL)
	{
		head = new;
	}
	else
	{
		while(temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return head;
}

/* This function will display list */

void display(NODE *head)
{
	NODE *temp = head;

	if(temp)
	{
		do{
			printf("%d ",temp->data);
			temp = temp->next;
		}while(temp);
		printf("\n");
	}
}

/* This function will remove the nodes from the list */

NODE *remove_node(NODE *head,int val)
{
	NODE *current = head,*prev = NULL;
	while(current)
	{
		if(current->data == val)
		{
			if(current == head)
			{
				head = current->next;
				current = head;
			}
			else
			{
		            prev = current;
		            current = current->next;
			}
		}
			else
			{
				prev = current;
				current = current->next;
			}

				
	}
	return head;
}

/* main program */
int main()
{
	NODE *head = NULL;
	int n,i,val;
	printf("number of elements: ");
	scanf("%d",&n);
        printf("enter the values: ");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
        }

	for(i=0;i<n;i++)
	{
		head = add_node(head,arr[i]);
	}
	printf("eneter the val: ");
	scanf("%d",&val);
                                               
	display(head);

	
        head = remove_node(head,val);

	display(head);
                                       											     return 0;
}
