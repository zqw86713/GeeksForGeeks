Deletion from a Circular Linked List


void deleteNode(struct Node *head, int key) {
	if (head == NULL) {
		return;
	}

	struct Node *curr = head, *prev;
	while (curr->data != key) {
		if (curr->next == head) {
			printf("\n Given node is not found.\n");
			break;
		}

		prev = curr;
		curr = curr->next;

	}

	if (curr->next == head) {
		head = NULL;
		free(curr);
		return;
	}

	if (curr == head) {
		prev = head;
		while (prev->next != head) {
			prev = prev->next;
		}

		head = curr->next;
		prev->next = head;
		free(curr);
	} else if (curr->next == head) {
		prev->next = head;
		free(curr);
	} else {
		prev->next = curr->next;
		free(curr);
	}




}