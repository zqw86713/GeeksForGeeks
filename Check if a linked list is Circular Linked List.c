Check if a linked list is Circular Linked List
Given a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. Below is an example of circular linked list.


bool isCircular(struct Node *head) {
	if (head == NULL) {
		return true;
	}
	struct Node *node = head->next;

	while (node != NULL && node != head) {
		node = node->next;
	}

	return (node == head);
}