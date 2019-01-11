// This function returns size of linked list 
int findSize(struct Node *node) 
{ 
   int res = 0; 
   while (node != NULL) 
   { 
       res++; 
       node = node->next; 
   } 
   return res; 
} 