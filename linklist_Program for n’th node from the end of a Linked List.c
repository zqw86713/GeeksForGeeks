
/* Function to get the nth node from the last of a linked list*/

/*	Qingwei's code.	*/

/*
	void printNthFromLast(struct Node* head, int n) { 
		struct Node *p = head;

		int counter =0;

		//	to get the length of list.
		while (p!=NULL) {
			P = P->next;
			counter++;
		}

		int length = counter;

		//	to print the (len - n + 1)th node.

		p = head;
		for (counter = 0; counter < len-n+1; counter++ ) {
			p = p->next;
		}

		//	to print the content.
		printf("%d", p->data);
	}
*/

void printNthFromLast(struct Node* head, int n) {
	int len = 0;
	int i;

	struct Node *temp = head;

	//	1)	count the number of nodes in linked list.
	while (temp != NULL) {
		temp = temp->next;
		len++;
	}


	//	check if value of n is not more than the length of the linked list.
	if (len < n) {
		return;
	}

	temp = head;

	//	2) get the (len-n+1)th node from the beginning

	for (i=1;i<len-n+1;i++) {
		temp = temp->next;
	}

	print("%d", temp->data);

	return;
}


/*
	Method 2 (Use two pointers) 

	Maintain two pointers – reference pointer and main 
	pointer. Initialize both reference and main pointers to 
	head. First move reference pointer to n nodes from head. 
	Now move both pointers one by one until reference pointer 
	reaches end. Now main pointer will point to nth node 
	from the end. Return main pointer.
*/

void printNthFromLast(struct Node *head, int n) {
	struct Node *main_ptr = head;
	struct Node *ref_ptr = head;
	int count = 0;

	if (head != NULL) {

		while (count < n) {
			if (ref_ptr == NULL) {
				printf("%d is greater than the number of nodes in list.", n);
				return;
			}

			ref_ptr = ref_ptr->next;
			count++;
		}	/*	End of while.	*/

		while (ref_ptr != NULL ) {
			main_ptr = main_ptr->next;
			ref_ptr = ref_ptr->next;
		}

		printf("Node No.%d from last is %d", n, main_ptr->data);
	}
}

