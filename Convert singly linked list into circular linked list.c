
struct Node *circular(struct Node *head) {
	struct Node *start = head;

	while (head->next != NULL) {
		head = head->next;
	}

	head->next = start;
	return start;
}