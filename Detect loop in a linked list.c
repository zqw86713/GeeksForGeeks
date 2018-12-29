/*	Detect loop in a linked list

	Given a linked list, check if the the linked list has loop or not. Below diagram shows a linked list with a loop.
	
	Floyd’s Cycle-Finding Algorithm:

	This is the fastest method. Traverse linked list using two pointers.  Move one pointer by one and other pointer by two.  
	If these pointers meet at same node then there is a loop.  If pointers do not meet then linked list doesn’t have loop.
*/



int detectLoop(struct Node *list) {
	struct Node *slow_p = list, *fast_p = list;

	while (slow_p && fast_p && fast_p->next ) {
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;

		if (slow_p == fast_p) {
			printf("Found Loop");
			return 1;
		}
	}

	/*	no loop found.	*/
	return 0;
}
