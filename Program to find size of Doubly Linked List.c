/*	Program to find size of Doubly Linked List
*/

int findSize(struct Node *node) {
	int res = 0;
	while (node != NULL) {
		res++;
		node = node->next;
	}
	return res;
}