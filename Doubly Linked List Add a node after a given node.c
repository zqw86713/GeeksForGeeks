Doubly Linked List | Set 1 (Introduction and Insertion)


2) Add a node after a given node.: (A 7 steps process)
We are given pointer to a node as prev_node, and the new node is inserted after the given node.

void insertAfter(struct Node *prev_node, int new_data) {
	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL.");
		return;
	}

	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = prev_node->next;

	prev_node->next = new_node;

	/*	Five of the above steps step process are same as the 5 steps used for inserting after a given node in singly linked list. The two extra steps are needed to change previous pointer of new node and previous pointer of new node’s next node.
	*/
	new_node->prev = prev_node;

	/*	Five of the above steps step process are same as the 5 steps used for inserting after a given node in singly linked list. The two extra steps are needed to change previous pointer of new node and previous pointer of new node’s next node.
	*/
	
	if (new_node->next != NULL) {
		new_node->next->prev = new_node;
	}
}