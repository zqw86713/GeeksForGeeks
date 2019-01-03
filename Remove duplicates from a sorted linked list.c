/*
Write a removeDuplicates() function which takes a list sorted in non-decreasing order and deletes any duplicate nodes from the list. The list should only be traversed once.
For example if the linked list is 11->11->11->21->43->43->60 then removeDuplicates() should convert the list to 11->21->43->60.
*/

void removeDuplicates(struct Node *head){
	struct Node *current = head;
	struct Node *next_next;

	if (current == NULL) {
		return;
	}

	while (current->next != NULL) {
		if (current->data == current->next->data) {
			next_next = current->next->next;
			free(current->next);
			current->next = next_next;
		} else {
			current = current->next;
		}
	}
}