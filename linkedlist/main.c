
#include "linked_list.h"

int
main() {
	linkedList *list = NULL;
	linkedList *list1 = NULL;

	insert_list_front(8, &list);
	insert_list_front(7, &list);
	insert_list_front(5, &list);

	insert_list_front(10, &list1);
	insert_list_front(6, &list1);
	
	printList(list);
	printList(list1);

	list = mergeList(list, list1);

	printList(list);
}
