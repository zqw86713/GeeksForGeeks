/*

Find pairs with given sum in doubly linked list
Given a sorted doubly linked list of positive distinct elements, the task is to find pairs in doubly linked list whose sum is equal to given value x, without using any extra space ?
Example:

Input : head : 1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9
        x = 7
Output: (6, 1), (5,2)
Expected time complexity is O(n) and auxiliary space is O(1).



A simple approach for this problem is to one by one pick each node and find second element whose sum is equal to x in the remaining list by traversing in forward direction.Time complexity for this problem will be O(n^2) , n is total number of nodes in doubly linked list.

An efficient solution for this problem is same as this article. Here is the algorithm :

Initialize two pointer variables to find the candidate elements in the sorted doubly linked list.Initialize first with start of doubly linked list i.e; first=head and initialize second with last node of doubly linked list i.e; second=last_node.

We initialize first and second pointers as first and last nodes. Here we don’t have random access, so to find second pointer, we traverse the list to initialize second.
If current sum of first and second is less than x, then we move first in forward direction. If current sum of first and second element is greater than x, then we move second in backward direction.

Loop termination conditions are also different from arrays. The loop terminates when either of two pointers become NULL, or they cross each other (second->next = first), or they become same (first == second)

*/

void pairSum(struct Node *head, int x) {
        struct Node *first = head;
        struct Node *second = head;
        while (second->next != NULL) {
                second = second->next;
        }

        bool found = false;

        while (first != NULL && second != NULL && firsr != second && second->next != first) {
                if ((first->data + second->data) == x) {
                        found = true;
                        printf("first data, %d, second data %d\n", firxt->data, second->data);
                        first = first->next
                        second = second->prev;
                }       else    {
                        if ((first->data + second->data) < x) {
                                first = first->next;
                        }       else    {
                                second = second->prev;
                        }
                }
        }

        if (found == false) {
                printf("no pair found");
        }
}