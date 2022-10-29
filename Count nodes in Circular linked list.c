Count nodes in Circular linked list

int countNodes(struct Node *head){
	struct Node *temp  = head;
	int result = 0;

	if (head != NULL) {
		do {
			temp = temp->next;
			result++;
		} while (temp != head);
	}

	return result;
}
