/*
 *  This progrm implements the double linked list
 *  author: naresh
 *  email:  nareshchemchem35@gmail.com
 *  Date :  09-09-2021
 */
  /* include headers */
 #include<stdio.h>   /*required for printf() */
 #include<stdlib.h>  /* required for structures */
 /* defining nodes */
 typedef struct node{
	 int data;
	 struct node *prev;  /* A reference to the previous node */
	 struct node *next;  /* A reference to the next node */
 }NODE;
/* This function add new node first */
NODE *add_first(NODE *head,int n)
{
  NODE *current;
  current = (NODE *)malloc(sizeof(NODE));
  current->data=0;
  current->next = current->prev = NULL;

 if(head == NULL)
 {
	current->data = n;
	head =current;
 }  
 else
 {
	current->data=n;
	current->prev=NULL;
	current->next=head;
	head=current;
 } 
 return head;
}
/* This function will display all node in list */

void display(NODE *head)
{
	if(head == NULL)
	{
		printf("list is empty..\n");
	}
	else
	{
		NODE *temp = head;
		while(temp)
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}

/* main program */
int main()

