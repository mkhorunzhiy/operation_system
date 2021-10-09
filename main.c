#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array_list.h"

void fillingList(ArrayList* list, int length);
void printingList(ArrayList *list);

int main() {

    srand(time(NULL));
    ArrayList* list = newArrayList();

    printf("After using add function :\n");
    fillingList(list, 6);
    printingList(list);
    printf("\n");


    printf("After using remove function :\n");
    removeElement(list, list->length - 1);
    printingList(list);
    printf("After using remove function again:\n");
    removeElement(list, list->length - 1);
    printingList(list);
    printf("\n");

    printf("After using insert function :\n");
    insert(list, 2, 11);
    insert(list, 3, 22);
    insert(list, 4, 12);
    printingList(list);
    printf("\n");

    printf("After using set function :\n");
    set(list, 0, 3);
    set(list, 2, 21);
    printingList(list);
    printf("\n");

    printf("After using get function:\n");
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
