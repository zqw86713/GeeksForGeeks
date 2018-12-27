/*	Linked List | Set 3 (Deleting a node)	*/

/*	Qingwei's code.		*/

// Node* deleteNode(Node *head,int x)
// {
//     //Your code here
//     struct Node *p = head;
    
//     while (p->next->data != x ) {
//         p = p->next;
//     }
    
//     struct Node temp = p->next;
//     p->next = temp->next;
//     free(temp);
    
    
//     return head;
// }

/*	given a reference to the head of a list and a key, 
	deletes the first occurrence of key in linked list.
*/
void deleteNode(struct Node **head_ref, int key) {
	//	store head node.
	struct Node *temp = *head_ref;
	struct Node *prev;

	//	If head node itself holds the key to be deleted.
	if (temp != NULL && temp->data == key) {
		*head_ref = temp->next; 	
		free(temp);
		return;
	}

	//	search for the key to be deleted, keep track of previous
	//	node as we need to change 'prev-next'.
	while (temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}

	//	if key was not present in linked list
	if (temp == NULL) {
		return;
	}

	//	unlink the node from linked list.
	prev->next = temp->next;

	//	free memory.
	free(temp);

}
