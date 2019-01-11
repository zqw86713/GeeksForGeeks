/*	

Remove duplicates from an unsorted doubly linked list


Given an unsorted doubly linked list containing n nodes. The problem is to remove duplicate nodes from the given list.

*/

void deleteNode(struct Node **head_ref, struct Node *del);

void removeDuplicates(struct Node **head_ref){
	if ((*head_ref) == NULL) {
		return;
	}

	unordered_set<int> us;
	struct Node *current = *head_ref, *next;

	while (current != NULL) {
		if (us.find(current->data) != us.end()) {
			next = current->next;
			deleteNode(head_ref, current);
			current = next;
		} else {
			us.insert(current->data);
			current = current->next;
		}
	}
}

void deleteNode(struct Node **head_ref, struct Node *del) {
	if (*head_ref == NULL) {
		return;
	}

	if (del == NULL) {
		return;
	}

	// you miss this statement.
	if (*head_ref == del) {
		*head_ref = del->next;
	}

	/*	my code.	

	struct Node temp = *head_ref;

	while (temp->next->data != del->data) {
		temp = temp->next;
	} 


	temp->next = del->next ;
	del->next->prev = temp;
	*/

	if (del->next != NULL) {
		del->next-prev = del->prev;
	}

	if (del->prev != NULL) {
		del->prev->next = del->next;
	}


	free(del);
}