#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "array_list.h"

void fillingList(ArrayList* list, int length);
void printingList(ArrayList *list);

int main() {

    srand(time(NULL));
    ArrayList* list = newArrayList();

    printf("After using function add 6 times:\n");
    fillList(list, 6);
    printList(list);
    printf("\n");


    printf("After using function remove 2 times:\n");
    removeElement(list, list->length - 1);
    removeElement(list, list->length - 1);
    printList(list);
    printf("\n");

    printf("After using function insert 3 times:\n");
    insert(list, 2, 11);
    insert(list, 3, 22);
    insert(list, 4, 12);
    printList(list);
    printf("\n");

    printf("After using function set 2 times:\n");
    set(list, 0, 3);
    set(list, 2, 21);
    printList(list);
    printf("\n");

    printf("After using function get 2 times:\n");
    printf("array[0] : %d\n", get(list, 0));
    printf("array[3] : %d\n", get(list, 3));
    printf("\n");

    printf("After function size:\n");
    printf("Size :  %d\n", size(list));

    return 0;
}
void fillingList(ArrayList* list, int length) {
    int index;
    for (index = 0; index < length; index++) {
        add(list, rand() % 100 + 1);
    }
}
void printingList(ArrayList* list) {
    int index;
    for (index = 0; index < list->length; index++) {
        printf("%d, ", get(list, index));
    }
    printf("\n");
}
