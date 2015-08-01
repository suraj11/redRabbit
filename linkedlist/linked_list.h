
#include <stdio.h>
#include <stdlib.h>

#ifndef __linked_list_h__
#define __linked_list_h__

typedef struct linkedList {
	int value;
	struct linkedList *next;
}linkedList;

/* functions */
void insert_list_front(int, linkedList **);

void printList(linkedList *);

void delete_list_front(linkedList **);

void revert_list(linkedList **);

linkedList* reverse_list_recur(linkedList **node);

linkedList* mergeList(linkedList *list1, linkedList *list2);

#endif
