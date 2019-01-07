/*

Count triplets in a sorted doubly linked list whose sum is equal to a given value x
Given a sorted doubly linked list of distinct nodes(no two nodes have the same data) and a value x. Count triplets in the list that sum up to a given value x.

Method 3 Efficient Approach(Use of two pointers):
Traverse the doubly linked list from left to right. For each current node during the traversal, initailze two pointers first = pointer to the node next to the current node and last = pointer to the last node of the list. Now, count pairs in the list from first to last pointer that sum up to value (x – current node’s data) (algorithm described in this post). Add this count to the total_count of triplets. Pointer to the last node can be found only once in the beginning.

*/

int countPairs(struct Node *first, struct Node *second, int value) {
	int count = 0;

	while (first != NULL && second != )
}

int countTriplets(struct Node *head, int x) {
	if (head == NULL) {
		return 0;
	}

	struct Node *current, *first, *last;
	int count = 0;

	last = head;
	while (last->next != NULL) {
		last = last->next;
	}

	for (current = head; current != NULL; current = current->next) {
		first = current->next;
		count += countPairs(first, last, x- current->data);
	}

	return count;
}