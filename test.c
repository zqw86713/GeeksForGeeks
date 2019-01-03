/* This solution uses the local reference */
struct Node* sortedIntersect(struct Node* a, struct Node* b) 
{ 
  struct Node* result = NULL; 
  struct Node** lastPtrRef = &result; 
   
  /* Advance comparing the first nodes in both lists. 
    When one or the other list runs out, we're done. */
  while (a!=NULL && b!=NULL) 
  { 
    if (a->data == b->data) 
    { 
      /* found a node for the intersection */
      push(lastPtrRef, a->data); 
      lastPtrRef = &((*lastPtrRef)->next); 
      a = a->next; 
      b = b->next; 
    } 
    else if (a->data < b->data) 
      a=a->next;       /* advance the smaller list */    
    else    
      b=b->next;     
  } 
  return(result); 
} 
  
/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginging of the linked list */
void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = 
            (struct Node*) malloc(sizeof(struct Node)); 
   
    /* put in the data  */
    new_node->data  = new_data; 
   
    /* link the old list off the new node */
    new_node->next = (*head_ref);     
   
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 
  