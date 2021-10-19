#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct swimrace_list {
    char *first_name;
    char *last_name;

    char *stroke;
    int distance;
    
    int minutes;
    float seconds;

    struct swimrace_list *next;
};

void print_swimrace(struct swimrace_list *sr);
void print_list(struct swimrace_list *srl);

struct swimrace_list * insert_front(struct swimrace_list *srl, char *f_name, char *l_name, char *stroke, int distance, int minutes, float seconds);
struct swimrace_list * free_list(struct swimrace_list *srl);

struct swimrace_list * make_swimrace(char *f_name, char *l_name, char *stroke, int distance, int minutes, float seconds, struct swimrace_list *next);

#endif
