
/*
Move last element to front of a given Linked List

Write a C function that moves last element to front in a given Singly Linked List. For example, if the given Linked List is 1->2->3->4->5, then the function should change the list to 5->1->2->3->4.
Algorithm:
Traverse the list till last node. Use two pointers: one to store the address of last node and other for address of second last node. After the end of loop do following operations.
i) Make second last as last (secLast->next = NULL).
ii) Set next of last as head (last->next = *head_ref).
iii) Make last as head ( *head_ref = last)
*/

/* We are using a double pointer head_ref here because we change 
   head of the linked list inside this function.*/

void moveToFront(struct Node **head_ref) {
	/* 	if listed list is empty, or it contain only one node.
	 then nothing needs to be done, simple return.	
	 */
	if (*head_ref == NULL || (*head_ref)->next == NULL) {
		return;
	}

	/*	initialize second last and last pointers.	*/
	struct Node *secLast = NULL;
	struct Node *last = *head_ref;

	/*	after this loop secLast contains address of second last node and last contains addres of last node in link list.
	*/

	while (last->next != NULL) {
		secLast = last;
		last = last->next;
	}

	/* Set the next of second last as NULL */
	secLast->next = NULL;

	/* Set next of last as head node */
	last->next = *head_ref;

	/* Change the head pointer to point to last node now */
	*head_ref = last;
}