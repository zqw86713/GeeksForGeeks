/*
Reverse a linked list
Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing links between nodes.
*/

/*
Iterative Method.

1.	Initialize three pointers prev as NULL, curr as head and next as NULL.
2.	(4 steps) Iterate trough the linked list. In loop, do following.

// Before changing next of current,
// store next node
next = curr->next
// Now change next of current
// This is where actual reversing happens
curr->next = prev

// Move prev and curr one step forward
prev = curr
curr = next
*/

static void reverse(struct Node **head_ref) {
	struct Node *prev = NULL
	struct Node *current = *head_ref;
	struct Node *next NULL;

	while (current != NULL) {
		//	store next
		next = current->next;

		// 	Reverse current node's pointer
		current->next = prev;

		//	Move pointers one position ahead.
		prev = current;
		current = next;

	}

	*head_ref = prev;
}