#include "linked_list.h"

void
revert_list(linkedList **list) {
	linkedList *cur = *list;
	linkedList *next;
	linkedList *prev = NULL;

	next = cur->next;
	cur->next = NULL;

	while(next != NULL) {
		prev = cur;
		cur = next;
		next = cur->next;
		cur->next = prev;
	}

	*list = cur;
}

linkedList*
reverse_list_recur(linkedList **node) {
	linkedList *rev;
	linkedList *head;
	
	if ((*node)->next == NULL) {
		head = *node;
		return head;
	}

	head = reverse_list_recur(&((*node)->next));
	((*node)->next)->next = *node;
	(*node)->next = NULL;

	return head;
}
	
