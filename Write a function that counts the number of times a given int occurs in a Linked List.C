/*	Given a singly linked list and a key, count number of occurrences of given key in linked list. 
	For example, if given linked list is 1->2->1->2->1->3->1 and given key is 1, then output should be 4.
	
	https://www.geeksforgeeks.org/write-a-function-that-counts-the-number-of-times-a-given-int-occurs-in-a-linked-list/
*/

/*
	Method 1- Without Recursion
	Algorithm:

	1. Initialize count as zero.
	2. Loop through each element of linked list:
	     a) If element data is equal to the passed number then
	        increment the count.
	3. Return count. 
*/
int count(struct node* head, int search_for)
{

    struct node *temp = head;
    int counter = 0;
    
    while (temp != NULL) {
        if (temp->data == search_for) {
            counter++;
        }
        temp = temp->next;
    }
    
    return counter;
}

/*	Method 2- With Recursion
	This method is contributed by MY_DOOM.
	Algorithm:

	Algorithm
	count(head,key);
	if head is NULL
	return frequency
	if(head->data==key)
	increase frequency by 1
	count(head->next,key)
*/

/* Counts the no. of occurences of a node 
(search_for) in a linked list (head)*/
int count(struct Node *head, int key) {
	int frequency = 0; 

	if (head == NULL) {
		return frequency;
	}

	if (head->data == key) {
		frequency++;
	}

	return count(head->next, key);
}