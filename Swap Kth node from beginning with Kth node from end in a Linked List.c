/*  Swap Kth node from beginning with Kth node from end in a Linked List
Given a singly linked list, swap kth node from beginning with kth node from end. Swapping of data is not allowed, only pointers should be changed. This requirement may be logical in many situations where the linked list data part is huge (For example student details line Name, RollNo, Address, ..etc). The pointers are always fixed (4 bytes for most of the compilers).
*/

/*
Given a singly linked list, swap kth node from beginning with kth node from end. Swapping of data is not allowed, only pointers should be changed. This requirement may be logical in many situations where the linked list data part is huge (For example student details line Name, RollNo, Address, ..etc). The pointers are always fixed (4 bytes for most of the compilers).

The problem seems simple at first look, but it has many interesting cases.

Let X be the kth node from beginning and Y be the kth node from end. Following are the interesting cases that must be handled.
1) Y is next to X
2) X is next to Y
3) X and Y are same
4) X and Y don’t exist (k is more than number of nodes in linked list)

*/

/* Utility function for calculating length of linked list */
int countNodes(struct Node *s) { 
    int count = 0; 
    while (s != NULL) 
    { 
        count++; 
        s = s->next; 
    } 
    return count; 
} 



void swapKth(struct Node **head_ref, int k) {
    //  Count nodes in linked list.
    int n = countNodes(*head_ref);

    //  Check if k is valid.
    if (n < k) {
        return ;
    }

    // if x and y are same.
    if (2*k -1 == n) {
        return;
    }

    // Find the kth node from beginning of linked list. We also find 
    // previous of kth node because we need to update next pointer of 
    // the previous. 

   Node *x = *head_ref;
   Node *x_prev = NULL;

   for (int i = 1; i<k ;i++) {
        x_prev = x;
        x = x->next;
   }

   // Similarly, find the kth node from end and its previous. kth node 
    // from end is (n-k+1)th node from beginning 
   Node *y = *head_ref;
   Node *y_prev = NULL;
   for (int i = 1; i< n-k+1; i++) {
        y_prev = y;
        y = y->next;
   }

        // If x_prev exists, then new next of it will be y. Consider the case 
        // when y->next is x, in this case, x_prev and y are same. So the statement 
        // "x_prev->next = y" creates a self loop. This self loop will be broken 
        // when we change y->next. 
        if (x_prev) {
                x_prev->next = y;
        }

        // Same thing applies to y_prev 
        if (y_prev) {
                y_prev->next = x;
        }

        // Swap next pointers of x and y. These statements also break self 
        // loop if x->next is y or y->next is x 

        Node *temp = x->next;
        x->next = y->next;
        y->next = temp;

        if (k == 1) {
                *head_ref = y;
        }

        if (k == n) {
                *head_ref = x;
        }



}
