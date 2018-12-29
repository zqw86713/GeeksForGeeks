/*	node of a doubly linked list.	*/
struct Node {
	int data;
	struct Node*	next;	//	Pointer to next node in DLL.
	struct Node*	prev;
}


Insertion
A node can be added in four ways
1) At the front of the DLL
2) After a given node.
3) At the end of the DLL
4) Before a given node.


/* Given a reference (pointer to pointer) to the head of a list 
   and an int, inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data) 
{ 
    /* 1. allocate node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
  
    /* 2. put in the data  */
    new_node->data = new_data; 
  
    /* 3. Make next of new node as head and previous as NULL */
    new_node->next = (*head_ref); 
    new_node->prev = NULL; 
  
    /* 4. change prev of head node to new node */
    if ((*head_ref) != NULL) 
        (*head_ref)->prev = new_node; 
  
    /* 5. move the head to point to the new node */
    (*head_ref) = new_node; 
}


void push(struct Node **head_ref, int new_data){
	/*	1. 	allocate node.	*/
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
}