Add a node at the front: (A 5 steps process)

The new node is always added before the head of the given Linked List. And newly added node becomes the new head of DLL. For example if the given Linked List is 10152025 and we add an item 5 at the front, then the Linked List becomes 510152025. Let us call the function that adds at the front of the list is push(). The push() must receive a pointer to the head pointer, because push must change the head pointer to point to the new node (See this)


void push(struct Node **head_ref, int new_data) {
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node->data = new_data;

	new_node->next = (*head_ref);
	new_node->prev = NULL;

	/*	Four steps of the above five steps are same as the 4 steps used for inserting at the front in singly linked list. The only extra step is to change previous of head.
	*/
	if ((*head_ref) != NULL) {
		(*head_ref) ->prev = new_node;
	}

	(*head_ref) = new_node;
}