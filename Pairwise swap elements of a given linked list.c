/*

Pairwise swap elements of a given linked list

Given a singly linked list, write a function to swap elements
 pairwise. For example, if the linked list is 1->2->3->4->5 
 then the function should change it to 2->1->4->3->5, and if 
 the linked list is 1->2->3->4->5->6 then the function should 
 change it to 2->1->4->3->6->5.

*/

/*	METHOD 1 (Iterative) 
Start from the head node and traverse the list.
 While traversing swap data of each node with its next node’s data.
 */

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void pairWiseSwap(struct Node *head) {
	struct Node *temp = head;

	/*	traverse further only if there are at least two nodes left	*/
	while (temp != NULL && temp->next != NULL) {
		swap(&temp->data, &temp->next->data);

		temp = temp->next->next;
	}

}