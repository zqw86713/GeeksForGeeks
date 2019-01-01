/*

Find length of loop in linked list
Write a function detectAndCountLoop() that checks whether a given Linked List contains loop and if loop is present then returns count of nodes in loop. 

*/

 
// Returns count of nodes present in loop. 
  
/*	to count the size of loop. 
	n mean the starting node of the loop.
*/
int countNodes(struct Node *n) {
	int count = 1;
	struct Node *temp = n;
	while (temp->next != n) {
		count++;
		temp = temp->next;
	}

	return count;
}




int countNodesinLoop(struct node *list){


	struct node *slow = list;
	struct node *fast = list;
	
	if (list == NULL) {
		return 0;
	}
	
	if (list != NULL) {
		while (fast != NULL && fast->next != NULL) {
			fast = fast->next->next;
			slow = slow->next;
			
			if (fast == slow) {
				return countNodes(slow); 

			}
		}  
		return 0;
  
	}
	
}