/*

Swap nodes in a linked list without swapping data
Given a linked list and two keys in it, swap nodes for two given keys. Nodes should be swapped by changing links. Swapping data of nodes may be expensive in many situations when data contains many fields.
It may be assumed that all keys in linked list are distinct.


This may look a simple problem, but is interesting question as it has following cases to be handled.
1) x and y may or may not be adjacent.
2) Either x or y may be a head node.
3) Either x or y may be last node.
4) x and/or y may not be present in linked list.

How to write a clean working code that handles all of the above possibilities.

*/

void swapNodes(struct Node **head_ref, int x, int y){
	//	Nothing to do if x and y are same.
	if (x == y ) {
		return ;
	}

	// 	search for x; and keep track of prev of Node x and current of x.
	struct Node *prevX = NULL;
	struct Node *currX = *head_ref;

	//	if x is the head of the list, the while() is not executed, and prevX == NULL
	while (currX && currX->data != x) {
		prevX = currX;
		currX = currX->next;
	}


	// 	search for y; and keep track of prev of Node y and current of y.
	struct Node *prevY = NULL;
	struct Node *currY = *head_ref;

	while (currY && currY->data != Y) {
		prevY = currY;
		currY = currY->next;
	}


	//	if either x or y is not present, nothing to do.
	if (currX == NULL || currY == NULL) {
		return;
	}

	//	if x is not head of the linked list.
	//	
	if (prevX != NULL) {
		prevX->next = currY;
	} 	else 	{
		*head_ref = currY;
	}

	//	if y is not head of the linked list
	if (prevY != NULL) {
		prevY->next = currX;
	} 	else 	{
		*head_ref = currX;
	}

	//	swap next pointers
	struct Node *temp = currY->next;
	currY->next = currX->next;
	currX->next = temp;
}