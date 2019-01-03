/*
Intersection of two Sorted Linked Lists
Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.
For example, let the first linked list be 1->2->3->4->6 and second linked list be 2->4->6->8, then your function should create and return a third list as 2->4->6.
*/


struct Node *sortedIntersect(struct Node *a, struct Node *b) {
	struct Node *result = NULL;
	struct Node **lastPtrRef = &result;


  	/* Advance comparing the first nodes in both lists. 
    When one or the other list runs out, we're done. */
	while (a != NULL && b != NULL) {
		if (a->data == b->data) {
			/*	found a node for the intersection.	*/
			push(lastPtrRef, a->data);
			lastPtrRef = &((*lastPtrRef)->next);
			a = a->next;
			b = b->next;

		}
		else if (a->data < b->data) {
			a = a->next;
		}	else	{
			b = b->next;
		}
	}
	return result;
}

/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginging of the linked list */
void push(struct Node **head_ref, int new_data){
	/*	allocate nodes	*/
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}