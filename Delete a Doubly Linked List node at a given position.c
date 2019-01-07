/*

Delete a Doubly Linked List node at a given position
Given a doubly linked list and a position n. The task is to delete the node at the given position n from the beginning.

Initial doubly linked list

*/

void deleteNode(struct Node **head_ref, struct Node *del){
	if (*head_ref == NULL || del == NULL) {
		return;
	}

	if (*head_ref == del) {
		*head_ref = del->next;
	}

	if (del->next != NULL) {
		del->next->prev = del->prev;
	}

	if (del->prev != NULL) {
		del->prev->next = del->next;
	}

	free(del);
}


void deleteNodeAtGivenPos(struct Node **head_ref, int n) {
	if (*head_ref == NULL || n <= 0) {
		return;
	}

	struct Node *current = *head_ref;
	int i;

	for (int i = 1; current != NULL && i < n; i++) {
		current = current->next;
	}

	if (current == NULL) {
		return;
	}

	deleteNode(head_ref, current);

}