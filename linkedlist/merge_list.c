#include "linked_list.h"

linkedList*
mergeList(linkedList *list1, linkedList *list2)
{
	
	if (!list1) {
		return list2;
	} else if(!list2) {
		return list1;
	}
	
	if (list1->value < list2->value) {
		list1->next = mergeList(list1->next, list2);
		return list1;
	} else {
		list2->next = mergeList(list1, list2->next);
		return list2;
	}
}

