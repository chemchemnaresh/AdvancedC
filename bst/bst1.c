/* This program implememts the working of basic binary search tree
 * Author : Naresh
 * mail   : nareshchemchem356@gmail.com
 * date   : 28-09-2021 
 *
 */
#include<stdlib.h> /* reqwuied for printf */
#include<stdio.h>  /* required fpor malloc(),free() */

   /* declaring bst node */
struct bin_tree {
	int data;
	struct bin_tree * right, * left;
};
typedef struct bin_tree node;

void insert(node ** tree, int val)
{
    	node *temp = NULL;
	if(!(*tree))
	{
      		temp = (node *)malloc(sizeof(node));
	        temp->left = temp->right = NULL;
                temp->data = val;
       	        *tree = temp;
                return;
	}

      	if(val < (*tree)->data)
	{
		insert(&(*tree)->left, val);
        }
        else if(val > (*tree)->data)
	{
      		insert(&(*tree)->right, val);
      	}

}
 
  /* pre order elements */
void print_preorder(node * tree)
{
    	if (tree)
   	{
	       	printf("%d\n",tree->data);
	        print_preorder(tree->left);
	        print_preorder(tree->right);
	}

}

   /* inorder elements */
void print_inorder(node * tree)
{
	if (tree)
       	{
	 	print_inorder(tree->left);
		printf("%d\n",tree->data);
		print_inorder(tree->right);
		
	}

}

  /* post order elements */
void print_postorder(node * tree)
{
	if (tree)
    	{
	   	print_postorder(tree->left);
	        print_postorder(tree->right);
		printf("%d\n",tree->data);
	}
}
 /* Delete a node */
void deltree(node * tree)
{
       	if (tree)
 	{
		deltree(tree->left);
	        deltree(tree->right);
		free(tree);
	}
}
  /* serch node */
node* search(node ** tree, int val)
{
	    if(!(*tree))
	    {
	    	    return NULL;
	    }

	    if(val < (*tree)->data)
	    {
		    search(&((*tree)->left), val);
	    }
	    else if(val > (*tree)->data)
	    {
		    search(&((*tree)->right), val);
	    }
	    else if(val == (*tree)->data)
	    {
		    return *tree;
	    }
}
  
  /* main program */
void main()
{
	node *root;
        node *tmp;

 root = NULL;

     /* Inserting nodes into tree */
 insert(&root, 9);
 insert(&root, 4);
 insert(&root, 15);
 insert(&root, 6);
 insert(&root, 12);
 insert(&root, 17);
 insert(&root, 2);

   /* Printing nodes of tree */
 printf("Pre Order Display\n");
 print_preorder(root);

 printf("In Order Display\n");
 print_inorder(root);

 printf("Post Order Display\n");
 print_postorder(root);

  /* Search node into tree */
 tmp = search(&root, 4);
 if (tmp)
 {
 	 printf("Searched node=%d\n", tmp->data);
 }
 else		
 {
 	 printf("Data Not found in tree.\n");
 }

   /* Deleting all nodes of tree */
 deltree(root);
}
