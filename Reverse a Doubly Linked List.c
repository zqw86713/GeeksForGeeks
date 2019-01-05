/* Function to reverse a Doubly Linked List */

void reverse(struct **head_ref) {
	struct Node *temp = NULL;
	struct Node *current = *head_ref;

	while (current != NULL) {
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}

	if (temp != NULL) {
		*head_ref = temp->prev;
	}
}