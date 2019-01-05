/*
	Function to check if a singly linked list is palindrome
	Given a singly linked list of characters, write a function that returns true if the given list is palindrome, else false.
*/

/*

/*
	METHOD 2 (By reversing the list)

	This method takes O(n) time and O(1) extra space.
	1) Get the middle of the linked list.
	2) Reverse the second half of the linked list.
	3) Check if the first half and second half are identical.
	4) Construct the original linked list by reversing the second half again and attaching it back to the first half

	To divide the list in two halves, method 2 of this post is used.
	When number of nodes are even, the first and second half contain exactly half nodes. The challenging thing in 
	this method is to handle the case when number of nodes are odd. We don’t want the middle node as part of any of the
	 lists as we are going to compare them for equality. For odd case, we use a separate variable ‘midnode’.
 */

void reverse(struct Node **);
bool compareLists(struct Node *, struct Node *);

bool isPalindrom(struct Node *head) {
	struct Node *slow_ptr = head, *fast_ptr = head;
	struct Node *second_half = NULL, *prev_of_slow_ptr = head;
	struct Node *midnode  = NULL; 
	bool res = true; 

	if (head != NULL && fast_ptr->next != NULL) {
		while (fast_ptr != NULL && fast_ptr->next != NULL) {
			fast_ptr = fast_ptr->next->next;
			prev_of_slow_ptr = slow_ptr;
			slow_ptr = slow_ptr->next;
		}

		if (fast_ptr != NULL) {
			midnode = slow_ptr;
			slow_ptr = slow_ptr->next;
		}

		second_half = slow_ptr;
		prev_of_slow_ptr->next = NULL;
		reverse(&second_half);
		res = compareLists(head, second_half);

		reverse(&second_half);

		if (midnode != NULL) {
			prev_of_slow_ptr->next = midnode;
			midnode->next = second_half;
		}	else	{
			prev_of_slow_ptr->next = second_half;
		}

	} 

	return res;
}

void reverse(struct Node **head_ref) {
	struct Node *prev = NULL;
	struct Node *current = *head_ref;
	struct Node *next = NULL;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head_ref = prev;
}

bool compareLists(struct Node *head1, struct Node *head2) {
	struct Node *temp1 = head1;
	struct Node *temp2 = head2;

	while (temp1 && temp2) {
		if (temp1->data == temp2->data) {
			temp1 = temp1->next;
			temp2 = temp2->next;
		}	else {
			return 0;
		}
	}


	if (temp1 == NULL && temp2 == NULL) {
		return 1;
	}

	return 0;
}