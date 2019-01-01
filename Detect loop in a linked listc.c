/*
	Detect loop in a linked list
	Given a linked list, check if the the linked list has loop or not. Below diagram shows a linked list with a loop.
*/


/*
Floyd’s Cycle-Finding Algorithm:
This is the fastest method. Traverse linked list using 
two pointers.  Move one pointer by one and other 
pointer by two.  If these pointers meet at
 same node then there is a loop.  
 If pointers do not meet then linked list doesn’t have loop.
*/	

//	Qingwei's code.	

int detectloop(struct node *list){
// your code goes here

    struct node *slow = list;
    struct node *fast = list;
    
    if (list == NULL) {
        return 0;
    }
    
    if (list != NULL) {
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            
            if (fast == slow) {
                return 1;
            }
        }  
        return 0;
        
    }
    
    
}


//	standard version.
int detectloop(struct Node *list) 
{ 
    struct Node  *slow_p = list, *fast_p = list; 
   
   	//	standard answer version.
   	//	the while() statement is different.
    while (slow_p && fast_p && fast_p->next ) 
    { 
        slow_p = slow_p->next; 
        fast_p  = fast_p->next->next; 
        if (slow_p == fast_p) 
        { 
           printf("Found Loop"); 
           return 1; 
        } 
    } 
    return 0; 
} 