
struct Node *exchangeNodes(struct Node *head) {
	struct Node *p = head;

	while (p->next-next != head) {
		p = p->next;
	}

	p->next->next = head->next;
	head->next = p->next;
	p->next = head;
	head = head->next;

	return head;
}
