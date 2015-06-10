#include "linked_list.h"


void
delete_list_front(linkedList **list) {
	linkedList *deleteNode = *list;

	*list = deleteNode->next;
	free(deleteNode); 
}
