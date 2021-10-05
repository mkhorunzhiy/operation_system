#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "array_list.h"

void fillList(ArrayList* list, int length);
void printList(ArrayList *list);

int main() {

    srand(time(NULL));

    ArrayList* list = newArrayList();

    printf("Using function add 6 times\n");
    fillList(list, 6);
    printList(list);
    printf("\n");

    printf("Using function insert 3 times\n");
    insert(list, 2, 101);
    insert(list, 3, 102);
    insert(list, 4, 103);
    printList(list);
    printf("\n");

    printf("Using function remove 2 times\n");
    removeElement(list, list->length - 1);
    removeElement(list, list->length - 1);
    printList(list);
    printf("\n");

    printf("Using function set 2 times\n");
    set(list, 0, 3);
    set(list, 2, 21);
    printList(list);
    printf("\n");

    printf("Using function get 2 times\n");
    printf("Element by index 0 is %d\n", get(list, 0));
    printf("Element by index 3 is %d\n", get(list, 3));
    printf("\n");

    printf("Using function size\n");
    printf("Size is %d\n\n", size(list));

    return 0;
}

void fillList(ArrayList* list, int length) {
    int index;
    for (index = 0; index < length; index++) {
        add(list, rand() % 10);
    }
}

void printList(ArrayList* list) {
    int index;
    for (index = 0; index < list->length; index++) {
        printf("%d ", get(list, index));
    }
    printf("\n");
}