/*

Write a function to get the intersection point of two Linked Lists.
There are two singly linked lists in a system. By some programming 
error, the end node of one of the linked list got linked to the second 
list, forming an inverted Y shaped list. Write a program to get the
 point where two linked list merge.

*/
int getCount(struct Node* head); 
int _getIntesectionNode(int d, struct Node* head1, struct Node* head2); 


int getIntesectionNode(struct Node *head1, struct Node *head2) {
	int c1 = getCount(head1);
	int c2 = getCount(head2);
	int d;

	if (c1 > c2) {
		d = c1 - c2;
		return _getIntesectionNode(d, head1, head2);
	}	else	{
		d = c2 - c1;
		return _getIntesectionNode(d, head2, head1);
	}
}

int _getIntesectionNode(int d, struct Node *head1, struct Node *head2) {
	int i;
	struct Node *current1 = head1;
	struct Node *current1 = head2;

	for (i=0; i < d; i++) {
		if (current1 == NULL) {
			return -1;
		}
		current1 = current1->next;
	}

	while (current1 != NULL && current2 != NULL) {
		if (current1 == current2) {
			return current1->data;
		}

		current1 = current1->next;
		current2 = current2->next;
	}

	return -1;
}

int getCount(struct Node *head) {
	struct Node *current = head;
	int count = 0;

	while (current != NULL) {
		count++;
		current  = current->next;
	}

	return count;
}