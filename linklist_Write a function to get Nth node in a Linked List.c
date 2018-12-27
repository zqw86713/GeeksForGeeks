/*	Write a function to get Nth node in a Linked List
	Write a GetNth() function that takes a linked 
	list and an integer index and returns the data 
	value stored in the node at that index position.
*/

/*	Algorithm: iteration.

	1. Initialize count = 0
	2. Loop through the link list
	     a. if count is equal to the passed index then return current
	         node
	     b. Increment count
	     c. change current to point to next of the current.

*/

/* 	my code. */

/*	int GetNth(struct node* head, int index)
	{
	   // Code here
	   
	   struct node* current = head;
	   
	   if (current == NULL) {
	       return ;
	   }
	   
	   int i ;
	   for (i = 0; i<index; i++) {
	       current = current->next;
	   }
	   
	   return current->next->data;
	}
*/

// Takes head pointer of  
// the linked list and index 
// as arguments and return 
// data at index 

int GetNth(struct Node *head, int index) {
	struct Node *current = head;
	int count = 0;
	while (current != NULL) {
		if (count == index) {
			return (current->data);
		}

		count++;
		current=current->next;
	}

	/*	if we get to this line, the caller was asking fora non-existent element.	*/
	assert(0);
}

/*
	Method 2- With Recursion
	Algorithm:

	
	getnth(node,n)
	1. Initialize count = 1
	2. if count==n
	     return node->data
	3. else
	    return getnth(node->next,n-1)

*/

int GetNth(struct Node *head,int n) {
	int count = 1;

    //if count equal too n return node->data 
	if (count == n) {
		return head->data;
	} else {
		//recursively decrease n and increase  
    	// head to next pointer  
		return GetNth(head->next, n-1);
	}
}

