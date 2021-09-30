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


<h2> Algorithm to convert Binary Search Tree into Balanced Binary Search Tree </h2>
<p>Example:Input of an unbalanced Binary Search Tree</p>
<img src="https://iq.opengenus.org/content/images/2019/07/Tree_12.PNG">

Output of the same tree but as a balanced Binary Search Tree:
<img src ="https://iq.opengenus.org/content/images/2019/07/Tree_13.PNG">

<P>As we know the property of binary search tree, inorder traversal of binary search tree gives element in sorted order which are stored in binary search tree.And then we can form the balanced binary search from the sorted array</p>

<h3> Algorithm: </h3>

<p>Traverse given BST in inorder and store result in an array. This step takes O(n) time. Note that this array would be sorted as inorder traversal of BST always produces sorted sequence.
Get the Middle of the array and make it root.
Recursively do same for left half and right half.
Get the middle of left half and make it left child of the root created in step 1.
Get the middle of right half and make it right child of the root created in step</p>

Explanation:
First of all we will do inorder traversal and and store the elements in array.

<p>First go to the left of the root but it is null therefore go to the root of the tree and store it in an array.
Then go to the right of the root go to the 2.left check if left child of the 2 is null the store 2 in the array.
Then go to the right of the 2 and check if the left child of 3 is null the store the 3 in array.
Then go to the right of 3 and check if the left child of 4 is null then store 5 in the array
Then go to the right of 4 and check if the left child of 5 is null then store 5 in array. Now check if the right 
child of 5 is null then return the array.</p>

<p>Now we will build the balanced binary search tree from the sorted array we obtained through the above process.
First of all find the the middle of the array i.e. 3 and store it as root of the new tree.</p>

   <img src ="https://iq.opengenus.org/content/images/2019/07/BTree.png">

<p> Then go to the left of the 3 and build the left subtree for that find again the middle of the left sub array of 
 3 i.e. 2 and store as the left child of 3.</p>

   <img src ="https://iq.opengenus.org/content/images/2019/07/BTree-1.png">

<p>Then go the left sub array of the 2 and again find the middle of the array and store it as the left child of 2.</p>

   <img src ="https://iq.opengenus.org/content/images/2019/07/BTree-2.png">

<p>Now start > end therefore go to root of the tree i.e. 3.
Now as we have constructed left sub tree in similar way now we will construct right sub tree go to the right sub 
array and again find the middle of the array i.e. 4 and store it as the right child of 3.</p>

   <img src ="https://iq.opengenus.org/content/images/2019/07/BTree-3.png">

<p>Now go the right sub array of 4 and again find the middle i.e. 5 and store it as the right child of the 4.</p>

   <img src ="https://iq.opengenus.org/content/images/2019/07/BTree-4.png">
