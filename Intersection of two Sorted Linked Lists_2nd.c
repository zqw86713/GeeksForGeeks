void push(struct Node **head_ref, int new_data);

struct Node *sortedIntersect(struct Node *a, struct Node *b){
    struct Node *result = NULL;
    struct Node **lastPtrRef = &result;

    while (a != NULL && b != NULL) {
        if (a->data ==  b->data) {
            push(lastPtrRef, a->data);
            a = a->next;
            b = b->next;
        }   else if (a->data < b->data) {
            a = a->next;
        }   else    {
            b = b->next;
        }
    }
    return result;
}


void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = *head_ref;

    (*head_ref) = new_node;
}