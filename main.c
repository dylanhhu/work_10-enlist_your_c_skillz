#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    // Create a new linked list and fill it with a few nodes
    struct swimrace_list *myRaces = make_swimrace("Dylan", "Hu", "Free", 100, 0, 49.47);
    myRaces = insert_front(myRaces, "Dylan", "Hu", "Fly", 100, 0, 58.92);
    myRaces = insert_front(myRaces, "Dylan", "Hu", "Breast", 100, 1, 4.01);
    print_list(myRaces);

    // Free the whole list
    myRaces = free_list(myRaces);
    printf("Freed list loc: %p\n", myRaces);

    return 0;
}
