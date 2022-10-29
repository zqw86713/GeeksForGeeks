Josephus Circle using circular linked list

// To create a new node of circular 
// linked list 
Node *newNode(int data) 
{ 
   Node *temp = new Node; 
   temp->next = temp; 
   temp->data = data; 
} 

void getJosephusPosition(int m, int n) {
	Node *head = newNode(1);
	Node *prev = head;


	for ( int i = 2; i <= n; i++) {
		prev->next = newNode(i);
		prev = prev->next;
	}
	prev->next = head;

	Node *ptr1 = head, *ptr2 = head;
	while (ptr1->next != ptr1) {
		int count = 1;
		while (count != m) {
			ptr2 = ptr1;
			ptr1 = ptr1->next;
			count++;
		}

		ptr2->next = ptr1->next;
		ptr1 = ptr2->next;
	}

	printf ("Last person left standing (Josephus Position) is %d\n ", ptr1->data); 
}