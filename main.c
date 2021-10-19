#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


int main() {
    // Create a new linked list and fill it with a few nodes
    struct swimrace_list *myRaces = make_swimrace("Dylan", "Hu", "Free", 100, 0, 49.47, 0, NULL);
    myRaces = insert_front(myRaces, "Dylan", "Hu", "Fly", 100, 0, 58.92, 1);
    myRaces = insert_front(myRaces, "Dylan", "Hu", "Breast", 100, 1, 4.01, 2);
    print_list(myRaces);

    printf("\nRemoving node with id 1:\n");

    myRaces = remove_node(myRaces, 1);
    print_list(myRaces);

    printf("\nRemoving node with id 2:\n");

    myRaces = remove_node(myRaces, 2);
    print_list(myRaces);

    printf("\nFreeing entire list:\n");

    // Free the whole list
    myRaces = free_list(myRaces);
    printf("Freed list loc: %p\n", myRaces);

    return 0;
}
