/*	Linked List | Set 2 (Inserting a node)	
*/
#include <stdio.h>


struct Node {
	int data;
	struct Node *next;
};

//	insert a new node at the beginnin.	 

void push (struct Node **head_ref, int new_data) {
	/*	1.	allocate Node.	*/
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	/*	2.	put in the data.	*/
	new_node->data = new_data;

	/*	3.	make next of new node as head.	*/
	new_node->next = (*head_ref);

	/*	4. move the head to poin to the new node.	*/
	(*head_ref) = new_node;
}

/*	insert a new node after a given node.	*/
/*	Qingwei's code.	*/
// void insertAfter(struct Node **head_ref, struct Node **given_ref, int new_data) {
// 	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

// 	struct Node **p = head_ref;

// 	while (p->next != NULL && p != given_ref) {
// 		p = p->next;
// 	}

// 	/*	p now points to the given node.	*/
// 	new_node->next = p->next;
// 	p->next = new_node;

// }

/*	given a node pre_node, insert a new node after prev_node.	*/
void insertAfter(struct Node *prev_node, int new_data) {
	/*	1.	check if the given prev_node is NULL.	*/
	if (prev_node == NULL) {
		printf("The given previous node can not be NULL.");
		return;
	}

	/*	2.	allocate new node.	*/
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	/*	3.	put in the data.	*/
	new_node->data = new_data;

	/*	4. make next of new node as next of prev_node.	*/
	new_node->next = prev_node->next;

	/*	5.	make next of prev_node as new_node.	*/
	prev_node->next = new_node;
}

	/*	given a reference (pointer to pointer) to the head of a 
		list and an integer, appends a new node at the end.	
	*/
	/*	Qingwei's code.	*/
	// void append(struct Node **head_ref, int new_data) {
	// 	struct Node *p = (struct Node *)malloc(sizeof(struct Node));

	// 	p = *head_ref;

	// 	while (p->next != NULL ) {
	// 		p = p->next;
	// 	}

	// 		create a new node.	
	// 	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	// 	new_node->data = new_data;
	// 	new_node->next = NULL;	

	// 	/*	make the next of p as new node.	*/

	// 	p->next = new_node;
	// }

	/*	the standard answer. It need to think if the list is empty.
	
	*/
	void append(struct Node **head_ref, int new_data){
		/*	1.	allocate node.	*/
		struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

		/*	this will be used in step 5.	*/
		struct Node *last = *head_ref; 

		/*	2.	put in the data.	*/
		new_node->data = new_data;

		/*	3.	This new node is going to be the last node.
			so make the next of it as NULL.	
		*/
		new_node->next = NULL;

		/*	4.	if the linked list is empty, then make the new node as head.	
		*/
		if (*head_ref == NULL) {
			*head_ref = new_node;
			return;
		}

		/*	5.	else traverse till the last node.	*/
		while (last->next != NULL) {
			last = last->next;
		}

		last->next = new_node;
		return;
	}