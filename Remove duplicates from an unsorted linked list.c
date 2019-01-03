/*	Remove duplicates from an unsorted linked list
	Write a removeDuplicates() function which takes a list and deletes any duplicate nodes from the list. The list is not sorted.
	For example if the linked list is 12->11->12->21->41->43->21 then removeDuplicates() should convert the list to 12->11->21->41->43.
*/

/*	METHOD 1 (Using two loops)
This is the simple way where two loops are used. Outer loop is used to pick the elements one by one and inner loop compares the picked element with rest of the elements.
*/


//	Qingwei's code, unfinished, stuck in the inner loop.
Node *removeDuplicates(Node *root)
{
 // your code goes here
    struct Node *p = root;
    struct Node *p_rest = NULL;
    int i = 0;
    
    while (p!= NULL) {
        i = 1;
        while (p_rest != NULL) {
            p_rest = p_rest + i;
            i++;
            
            if (p->data == p_rest->data) {
                
            }
        }
    }
    
    return root;
  
}

//	standard answers.

struct Node *removeDuplicates(struct Node *start) {
	struct Node *ptr1, *ptr2, *dup;
	ptr1 = start;

	while (ptr1 != NULL && ptr1->next != NULL) {
		ptr2 = ptr1;

		/* compare the picked element with rest of the elements.
		*/
		while (ptr2->next != NULL) {
			/*	if duplicate then delete it.	*/
			if (ptr1->data == ptr2->next->data) {
				/*	sequence of steps is important here.	*/
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete(dup);
			}	else 	{		//	This is tricky.	
				ptr2 = ptr2->next;
			}
		}

		pr1 = ptr1->next;
	}
}