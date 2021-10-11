/* Program for different binary tree traversals 
 * Tree Traversal – Inorder, Preorder and Postorder
 * Ex:
 * Preorder: 1 2 3 4 5
 * Inorder : 4 2 5 1 3
 * postorder:4 5 2 3 1
 *
 * Author : Naresh
 * email  : nareshchemchem35@gmail.com
 * Date   : 11-10-2021
 */

/* header files */
#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left childand a pointer to right child */
struct node {
	int data;
	struct node* left;
	struct node* right;
};

/*  function that allocates a new node with the given data and NULL left and right pointers. */
struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;


	return (node);
}
/* Given a binary tree, print its nodes according to the "bottom-up" postorder traversal. */
void printPostorder(struct node* node)
{
	if (node == NULL)
		return;

	/* first recur on left subtree */
 	printPostorder(node->left);

	/* then recur on right subtree */
	printPostorder(node->right);
		
	/* now deal with the node */
	printf("%d ", node->data);
}
	
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
	if (node == NULL)
		return;
	/* first recur on left child */
	printInorder(node->left);
			
        /* then print the data of node */
	printf("%d ", node->data);

	/* now recur on right child */
	printInorder(node->right);
	 														}
	 														/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
	if (node == NULL)
		return;
		
	/* first print data of node */
	printf("%d ", node->data);

	/* then recur on left subtree */
	printPreorder(node->left);

	/* now recur on right subtree */
	printPreorder(node->right);
}

/* main program */
int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	printf("\nPreorder traversal of binary tree is \n");
	printPreorder(root);
	
	printf("\nInorder traversal of binary tree is \n");
	printInorder(root);

	printf("\nPostorder traversal of binary tree is \n");
	printPostorder(root);
	
	getchar();
	return 0;
}

