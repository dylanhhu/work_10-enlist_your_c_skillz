#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>


// Prints the racetime struct in the format:
// Distance Time\t\tLast First\tmm:ss.ss
// Eg: 50 Free      Dylan Hu    0:22.20
void print_swimrace(struct swimrace_list *rt) {
    printf("%d %-10s\t%s %s\t%d:%05.2f\t\tThis node: %p\tNext node:%p\n", rt->distance, rt->stroke, rt->last_name, rt->first_name, rt->minutes, rt->seconds, rt, rt->next);
}


// Prints out a swimrace linked list
// Prints out the index in the list before the
// contents of the item
void print_list(struct swimrace_list *srl) {
    int i = 0;

    do {
        printf("%d: ", i);
        print_swimrace(srl);
        srl = srl->next;
        i++;
    } while (srl != NULL);
}


// Creates a new node, and adds it to the
// front of the provided linked list
struct swimrace_list * insert_front(struct swimrace_list *srl, char *f_name, char *l_name, char *stroke, int distance, int minutes, float seconds) {
    struct swimrace_list *new_sr = make_swimrace(f_name, l_name, stroke, distance, minutes, seconds, srl);
    
    return new_sr;
}


// Frees the whole list and returns
// a pointer to the beginning
struct swimrace_list * free_list(struct swimrace_list *srl) {
    struct swimrace_list *next = srl->next;

    do {
        next = srl->next;
        free(srl);
        // printf("Freed: %p\n", srl);
        srl = next;
    } while (srl != NULL);

    return srl;
}


// Creates a new swimrace_list
// and returns a pointer to it
struct swimrace_list * make_swimrace(char *f_name, char *l_name, char *stroke, int distance, int minutes, float seconds, struct swimrace_list *next) {
    struct swimrace_list *sr = malloc(sizeof(struct swimrace_list));

    sr->first_name = f_name;
    sr->last_name = l_name;

    sr->stroke = stroke;
    sr->distance = distance;

    sr->minutes = minutes;
    sr->seconds = seconds;

    sr->next = next;

    return sr;
}
