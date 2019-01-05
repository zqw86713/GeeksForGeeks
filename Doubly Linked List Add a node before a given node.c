/*
Add a node before a given node.

Steps
Let the pointer to this given node be next_node and the data of the new node to be added as new_data.

Check if the next_node is NULL or not. If it’s NULL, return from the function because any new node can not be added before a NULL
Allocate memory for the new node, let it be called new_node
Set new_node->data = new_data
Set the previous pointer of this new_node as the previous node of the next_node, new_node->prev = next_node->prev
Set the previous pointer of the next_node as the new_node, next_node->prev = new_node
Set the next pointer of this new_node as the next_node, new_node->next = next_node;
If the previous node of the new_node is not NULL, then set the next pointer of this previous node as new_node, new_node->prev->next = new_node
Else, if the prev of new_node is NULL, it will be the new head node. So, make (*head_ref) = new_node.

*/


void insertBefore(struct Node **head_ref, struct Node *next_node, int new_data) {
	if (next_node == NULL) {
		printf("the given next node cannot be NULL.");
		return;
	}

	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->prev = next_node->prev;

	next_node->prev = new_node;
	new_node->next = next_node;

	/*	
	If the previous node of the new_node is not NULL, then set the next pointer of this previous node as new_node, new_node->prev->next = new_node
	Else, if the prev of new_node is NULL, it will be the new head node. So, make (*head_ref) = new_node.	
	*/
	if (new_node->prev != NULL) {
		new_node->prev->next = new_node;
	}	else 	{
		(*head_ref) = new_node;
	}

}