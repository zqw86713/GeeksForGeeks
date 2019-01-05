/*  

Move last element to front of a given Linked List

Write a C function that moves last element to front in a given Singly Linked List. For example, if the given Linked List is 1->2->3->4->5, then the function should change the list to 5->1->2->3->4.
Algorithm:
Traverse the list till last node. Use two pointers: one to store the address of last node and other for address of second last node. After the end of loop do following operations.
i) Make second last as last (secLast->next = NULL).
ii) Set next of last as head (last->next = *head_ref).
iii) Make last as head ( *head_ref = last)

*/

void moveToFront(struct Node **head_ref) {
    if (*head_ref == NULL || (*head_ref)->next == NULL) {
        return;
    } 

    struct Node *secLast = NULL;
    struct Node *last = *head_ref;

    while (last->next != NULL) {
        secLast = last;
        last = last->next;
    }

    secLast->next = NULL;
    last->next = *head_ref;

    *head_ref = last;
}