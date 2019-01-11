/*	
Delete all occurrences of a given key in a doubly linked list

Given a doubly linked list and a key x. The problem is to delete all occurrences of the given key x from the doubly linked list.
*/

void deleteNode(struct Node** head_ref, struct Node* del) ;

 
/* function to delete all occurrences of the given 
    key 'x' */
void deleteAllOccurOfX(struct Node **head_ref, int x) {
	if ((*head_ref) == NULL) {
		return;
	}

	struct Node *current = *head_ref;
	struct Node *next;

	while (current != NULL) {
		if (current->data == x) {
			next = current->next;
			deleteNode(head_ref, current);
			current = next;
		} else {
			current = current->next;
		}
	}
}

void deleteNode(struct Node **head_ref, struct Node *del){
	if (*head_ref == NULL || del == NULL) {
		return;
	}

	if (*head_ref == del) {
		*head_ref = del->next;
	}

	if (del->next != NULL) {
		del->next-prev = del->prev;
	}

	if (del->prev != NULL) {
		del->prev->next = del->next;
	}

	free(del);
}