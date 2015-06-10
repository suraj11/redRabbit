#include "linked_list.h"

static linkedList *
create_list_node() {
	linkedList *list;
	list = (linkedList *) malloc(sizeof(linkedList));
	if (list == NULL) {
		printf ("out of memory.\n");
	}
	return list;
}


void
printList(linkedList *list) {
	while(list != NULL) {
		printf("%d -->", list->value);
		list = list->next;
	}
	printf("NULL\n");
}

void
insert_list_front(int value, linkedList **list) {
	linkedList *node;
	node = create_list_node();
	node->value = value;
	node->next  = *list;
		
	*list = node; 
}
