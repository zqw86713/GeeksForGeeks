// Iterative C program to find length or count of nodes in a linked list 

/*
	Iterative Solution

	1) Initialize count as 0 
	2) Initialize a node pointer, current = head.
	3) Do following while current is not NULL
	     a) current = current -> next
	     b) count++;
	4) Return count 
*/

/*	counts number of nodes in linked list.	*/
int getCount(struct Node* head) {
	int count = 0;	// initialize count.
	struct Node *current = head;	// initialize current.

	while (current != NULL) {
		count++;
		current = current->next;
	}

	return count;
}

/*
	Recursive Solution

	int getCount(head)
	1) If head is NULL, return 0.
	2) Else return 1 + getCount(head->next) 
*/

int getCount(struct Node *head) {
	//	base case
	if (head == NULL) {
		return 0;
	}

	return 1 + getCount(head->next);
}