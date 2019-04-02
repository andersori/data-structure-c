#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node
{
    void* data;
    struct node* next;
} No;


typedef struct
{
    unsigned _size;
    No* root;
    No* last;

} LinkedList;


void init_lst(LinkedList* lst);
void destroy_lst(LinkedList* lst);

void push_lst(LinkedList* lst, void* data);
void remove_lst(LinkedList* lst, unsigned pos);
void* get_lst(LinkedList* lst, unsigned pos);
unsigned size_lst(LinkedList* lst);

#endif // LINKEDLIST_H
