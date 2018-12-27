/*	given a reference (pointer to pointer ) to the head of a list and a position, 
deletes the node at the given position.	*/

struct Node {
	int data;
	struct Node *next;
};

void push (struct Node** head_ref, int new_data) {
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	//	if the linked list is empty.
	if (*head_ref == NULL) {
		return;
	}


	// 	store head node
	struct Node *temp = *head_ref;

	//	if head needs to be removed.
	if (position == 0) {
		*head_ref = temp->next;	
		free(temp);
		return;
	}

	//	find previous node of the node to be deleted.
	for (int i = 0; temp != NULL && i < position-1; i++) {
		temp = temp->next;
	}

	//	if position is more than number of nodes.
	if (temp == NULL || temp->next == NULL) {
		return;
	}

	// 	Node temp->next is the node to be deleted.
	//	store pointer to the next of node to be deleted.

	struct Node *next = temp->next->next;

	//	Unlink the node from linked list.
	free(temp->next);

	temp->next = next;

}