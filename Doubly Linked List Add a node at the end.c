Add a node at the end: (7 steps process)

The new node is always added after the last node of the given Linked List. For example if the given DLL is 510152025 and we add an item 30 at the end, then the DLL becomes 51015202530.
Since a Linked List is typically represented by the head of it, we have to traverse the list till end and then change the next of last node to new node.


void append(struct Node **head_ref, int new_data) {
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	struct Node *last = *head_ref;

	new_node->data = new_data;
	new_node->next = NULL;

	if (*head_ref == NULL) {
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL) {
		last = last->next;
	}

	last->next = new_node;

	/*	Six of the above 7 steps are same as the 6 steps used for inserting after a given node in singly linked list. The one extra step is needed to change previous pointer of new node.
	*/
	new_node->prev = last;

	return;
}