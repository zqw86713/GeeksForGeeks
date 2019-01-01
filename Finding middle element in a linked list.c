

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
/*  Qingwei's version.  */
int getMiddle(Node *head)
{
   struct Node *slow = head;
   struct Node *fast = head;
   
   if (head == NULL) {
       return -1;
   }
   
   /*   slow move 1 step forward, fast moves 2 steps forward each iteration.    */
   // following sentence is qingwei's code.
   // while (fast->next->next != NULL) {

   // PLEASE remember the while() condition, 
   // while (fast != NULL && fast->next != NULL)
   while(fast != NULL && fast->next != NULL){
       slow = slow->next;
       fast = fast->next->next;
   }
   
   return slow->data;
   
}






void printMiddle(strut node *head) {
    int count = 0;
    struct node *mid = head;

    while (head != NULL ) {
        if (count%2 != 0) {
        mid = mid->next;
    }

        ++count;
        head = head->next;
    }

    if (mid != NULL) {
        printf("The middle element is [%d]\n\n", mid->data); 

    }
}

