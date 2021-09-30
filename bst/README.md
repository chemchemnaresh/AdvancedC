<h1> Binary Search Tree </h1>
         
             <p>The Binary Search Tree is a node-based binary tree data structure which has the following properties:
              
               -The left subtree of a node contains only nodes with keys lesser than the node's key.
               -The right subtree of a nide contains only nodes with keys greater the node's key.
               -The left and right subtree each must also be a binary serach tree.</p>
                                                                     

   Binary search tree look like This:

                           50
                         /    \
                        30     90
                       / \       \
                      20  40     100 

 <h3> Terms </h3>
    
    <p> Node any ithem that is stored in the tree.ROOT the top item in the tree.(50 in the tree abiove) Child Node(s) 
    under the current node.(20 and 40 are children of 30 in the tree above) parent the node directly above the
    current node.(90 is the parent of 100 in the tree) Leaf A node which has no children.(20 is a leaf in the tree).</p>

Node: It represents a termination point in a tree.

Root: A tree’s topmost node.
 
Parent: Each node (apart from the root) in a tree that has at least one sub-node of its own is called a parent node.

Child: A node that straightway came from a parent node when moving away from the root is the child node.

Leaf Node: These are external nodes. They are the nodes that have no child.

Internal Node: As the name suggests, these are inner nodes with at least one child.

Depth of a Tree: The number of edges from the tree’s node to the root is.

Height of a Tree: It is the number of edges from the node to the deepest leaf. The tree height is also considered the root height.
          
<h2> Types of Binary Tree </h2>

<h3> Full Binary Tree: </h3>

 <p> Special type of Binary Tree where every parent node or an internal node has either 2 or no child nodes.
  It is also known as proper binary tree.</p>
 <img src ="https://cdn.programiz.com/sites/tutorial2program/files/full-binary-tree_0.png">

<h3> Perfect Binary Tree: </h3>

<p> A binary tree is said to be ‘perfect’ if all the internal nodes have strictly two children, and every external or 
 leaf node is at the same level.</p>
<img src="https://cdn.programiz.com/sites/tutorial2program/files/perfect-binary-tree_0.png">

<h3> Complete Binary Tree: </h3>

<p> A complete binary tree is another specific type of binary tree where all the tree levels are filled entirely with 
  nodes, except the lowest level of the tree. Also, in the last or the lowest level of this binary tree, every node 
  should possibly reside on the left side.
  A complete binary tree is just like a full binary tree, but with two major differences
  All the leaf elements must lean towards the left.
  The last leaf element might not have a right sibling  a complete binary tree doesn't have to be a full binary tree</p> <img src ="https://cdn.programiz.com/sites/tutorial2program/files/complete-binary-tree_0.png">


<h3> Degenerate Binary tree </h3>

<p> The degenerate binary tree is a tree in which all the internal nodes have only one children.</p>
 <img src ="http://github.com/chemchemnaresh/AdvancedC/blob/main/figures/degenerate.png">

<h3> Balanced Binary Tree </h3>

<p>A binary tree is said to be ‘balanced’ if the tree height is O(logN), where ‘N’ is the number of nodes. In a balanced   binary tree, the height of the left and the right subtrees of each node should vary by at most one. An AVL Tree and
   Red-Black Tree are some common examples of data structure that can generate a balanced binary search tree. Here is an   example of a balanced binary tree:</p>
  -Difference between the left and the right subtree for any node is not more than one
  -The left subtree is balanced
  -The right subtree is balanced
 <img src ="https://cdn.programiz.com/sites/tutorial2program/files/balanced-binary-tree.png"> 


<h1> Basic Operations </h1>

  Following are the basic operations of a tree :
 
  Search − Searches an element in a tree.

  Insert − Inserts an element in a tree.

  Pre-order Traversal − Traverses a tree in a pre-order manner.

  In-order Traversal − Traverses a tree in an in-order manner.

  Post-order Traversal − Traverses a tree in a post-order manner.

<h3> Node </h3>

 Define a node having some data, references to its left and right child nodes.

 struct node {
    int data;   
    struct node *leftChild;
    struct node *rightChild;
 };


  <h1> Tree Traversals(Inorder,Preorder,Postorder </h1>

                      1
                    /   \
                   2     3
                 /  \
                4    5

 (a) Inorder (Left, Root, Right) : 4 2 5 1 3 
 (b) Preorder (Root, Left, Right) : 1 2 4 5 3 
 (c) Postorder (Left, Right, Root) : 4 5 2 3 1 

<h3>  Inorder Traversal </h3>

  Algoritham Inorder
   1. Visit the left subtree of the the Inorder Traversal.
   2. Visit the root.
   3. Visit the right subtree of the root Inorder Traversal.

 Uses of Inorder:
 
  In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. To get nodes of 
  BST in non-increasing order, a variation of Inorder traversal where Inorder traversal s reversed can be used. 
  Example: Inorder traversal for the above-given figure is 4 2 5 1 3.

<h3> Preorder Traversal </h3>

 Algorithm Preorder(tree)
    1. Visit the root.
    2. Visit the left subtree of the root Preorder Traversal.
    3. Visit the right subtreem of the root Preorder Traversal. 


 Uses of Preorder :

  Preorder traversal is used to create a copy of the tree. Preorder traversal is also used to get prefix expression
  on of an expression tree.  
  Example: Preorder traversal for the above given figure is 1 2 4 5 3.


<h3> Postorder Traversal </h3>

 Algorithm Postorder(tree)
   1. Visit the left subtree of the root in Postorder Traversal.
   2. Visit the right subtree of the root in Postorder Traversal
   3. Visit the root.

 Uses of Postorder:
 
  Postorder traversal is used to delete the tree. Please see the question for deletion of tree for details. 
  Postorder traversal is also useful to get the postfix expression of an expression tree. 
  Example: Postorder traversal for the above given figure is 4 5 2 3 1. 


<h3> Seraching a value in a bst </h3>

<p>If an element to be searched
 1. If root is Null then return false. Otherwise,
 2. If root value is equal to the searched value then return True
 3. If searched value is less than or equal to the root’s value, recursively search in left subtree, Else
 4. If searched value is greater than the root’s value, recursively search in right subtree.

 Time Complexity:
 The worst case time complexity of a Search operation O(h) is h. where h is height of Binary Search Tree

Example
figure : Searching value 10 in given Tree

                 7               1. 10>7 - so go to the right child
               /   \
              6     12           2. 10<12 - so go to the left child
            /  \    /
           5    8  10            3.10=10  - seasrch sucessfull.

