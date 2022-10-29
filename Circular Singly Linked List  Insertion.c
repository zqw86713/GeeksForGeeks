Insertion in an empty List

struct Node *addToEmpty(struct Node *last, int data) {
	if (last != NULL) {
		return last;
	}

	struct Node *last = (struct Node *)malloc(sizeof(struct Node));

	last->data = data;

	last->next = last;

	return last;
}