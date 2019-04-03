#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef int data_type;

typedef struct node_lst
{
    data_type data;
    struct node* next;
} No;


typedef struct
{
    unsigned _size;
    No* root;
    No* last;

} LinkedList;


LinkedList* init_lst();
void destroy_lst(LinkedList* lst);

void push_lst(LinkedList* lst, data_type data);
void remove_lst(LinkedList* lst, unsigned pos);
data_type get_lst(LinkedList* lst, unsigned pos);
unsigned size_lst(LinkedList* lst);

void print_lst(LinkedList* lst);

#endif // LINKEDLIST_H
