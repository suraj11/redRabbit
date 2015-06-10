
#include "linked_list.h"

int
main() {
	linkedList *list = NULL;

	insert_list_front(5, &list);
	insert_list_front(7, &list);
	printList(list);
	delete_list_front(&list);
	printList(list);
}
