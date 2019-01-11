/*	
Remove duplicates from a sorted doubly linked list

Given a sorted doubly linked list containing n nodes. The problem is to remove duplicate nodes from the given list.

*/

void deleteNode(struct Node** head_ref, struct Node* del) ;

void removeDuplicates(struct Node** head_ref) {
	if ((*head_ref) == NULL) {
		return;
	}

	struct Node *current = *head_ref;
	struct Node *next;

	while (current->next != NULL) {
		if (current->data == curent->next->data) {
			deleteNode(head_ref, currrent->next);
		} else {
			current = current->next;
		}
	}

}

void deleteNode(struct Node **head_ref, struct Node *del) {
	if (*head_ref == NULL || del == NULL) {
		return ;
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