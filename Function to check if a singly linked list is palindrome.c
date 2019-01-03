/*
Function to check if a singly linked list is palindrome
Given a singly linked list of characters, write a function that returns true if the given list is palindrome, else false
*/

/*
METHOD 2 (By reversing the list)
This method takes O(n) time and O(1) extra space.
1) Get the middle of the linked list.
2) Reverse the second half of the linked list.
3) Check if the first half and second half are identical.
4) Construct the original linked list by reversing the second half again 
and attaching it back to the first half

To divide the list in two halves, method 2 of this post is used.
When number of nodes are even, the first and second half contain exactly 
half nodes. 

The challenging thing in this method is to handle the case 
when number of nodes are odd. We don’t want the middle node as part of any
 of the lists as we are going to compare them for equality. For odd case,
  we use a separate variable ‘midnode’.

*/

void reverse(struct Node ** head);
bool compareList(struct Node *head, struct Node *head_end);

bool isPalindrom(struct Node *head) {
	struct Node *slow_ptr = head;
	struct Node *fast_ptr = head;
	struct Node *second_half = NULL;
	struct Node *prev_of_slow_ptr = head;
	struct Node *midnode = NULL;	//	to handle odd size list.

	bool result = true;		//	initialize result as true;	

	if (head != NULL && head->next != NULL) {
		while (fast_ptr != NULL && fast_ptr->next != NULL) {
			fast_ptr = fast_ptr->next->next;

			/*	we need previous of the slow pointer for 
			linked list with odd elements.	
			*/
			prev_of_slow_ptr = slow_ptr;
			slow_ptr = slow_ptr->next;
		}

		/*	fast pointer would become null when there are even element in list.
		        如果表的数量是偶数，fast_ptr是NULL； 反之，是NOT NULL.
			We need to skip the middle node 
        	for odd case and store it somewhere so that we can restore the 
        	original list
        */
        

	}
}