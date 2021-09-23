<h1>Double Linked List</h1>

A Double linked list is a linear data structure which is capble to traverse in forward direction as well as backward 
direction .

   Every node in double linked list  contains three parts
   1.information
   2.addition of next node
   3.Adress of previous node
   
   The last node of double linked list *next should be NULL indicatinf end of linked list.

   The first node of double linked list *prev should be NULL indicating end of linked list.

   Each node points to not only successor but the predecessor.
  
   There are two NULL: at the first and lost nodes in the list.

   Advantage:give a node, it is easy to visit its predecessor convenient to traverse list backwards. 


<h1> Circular Linked List </h1>

Circular linked list is a linked list where all nodes are connected to form a circle. There is no <b>NULL</b> at the end. 
A circular linked list can be a single circular or double circular linked list.

In circular linked list any node can be a starting point. We can traverse the whole list by starting from any point. We just need to stop when the first visited node is visited again.

In circular single linked list the last node contains the address of the first node in the list.

 
