/*	Write a function to delete a Linked List. Algorithm For C/C++: Iterate through the linked list and delete all the nodes one by one. 
	Main point here is not to access next of the current pointer if current pointer is deleted.
*/

	/* Function to delete the entire linked list */
void deleteList(struct Node** head_ref) 
{ 
   /* deref head_ref to get the real head */
   struct Node* current = *head_ref; 
   struct Node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    
   /* deref head_ref to affect the real head back 
      in the caller. */
   *head_ref = NULL; 
} 

void deleteList(struct Node **head_ref) {
	/*	deref head_ref to get the read head.	*/
	struct Node *current = *head_ref;
	struct Node* next;

	while (current != NULL) {
		next = current->next;
		free(current);
		current = next;
	}

	/*	deref head_ref to affect the real headback in the caller.	*/
	*head_ref = NULL;
}