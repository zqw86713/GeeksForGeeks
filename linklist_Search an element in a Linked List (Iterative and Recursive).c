/*	Search an element in a Linked List (Iterative and Recursive).	*/

/*
	Iterative Solution

	2) Initialize a node pointer, current = head.
	3) Do following while current is not NULL
	    a) current->key is equal to the key being searched return true.
	    b) current = current->next
	4) Return false 
*/

/* Link list node */
struct Node 
{ 
    int key; 
    struct Node* next; 
}; 

// Iterative C program to search an element in linked list 

bool search(struct Node* head, int x) {
	struct Node *current = head;

	while(current != NULL) {
		if (current->data == x) {
			return true;
		}
		current = current->next;
	}

	return false;
}

/*	Recursive Solution

	bool search(head, x)
	1) If head is NULL, return false.
	2) If head's key is same as x, return true;
	2) Else return search(head->next, x) 

*/	

bool search(struct Node* head, int x) {
	if ( head == NULL) {
		return false;
	}

	if (head->data == x) {
		return true;
	} else {
		return search(head->next, x);
	}
}