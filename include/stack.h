#ifndef STACK_H
#define STACK_H

typedef int data_type;

typedef struct node_stk
{
    data_type data;
    struct node* next;
} No_Stk;

typedef struct stack
{
    unsigned _size;
    No_Stk* top;
} Stack;

Stack* init_stk();
void destroy_stk(Stack* stk);

void push_stk(Stack* stk, data_type data);
void pop_skt(Stack* stk);
data_type top_stk(Stack* stk);

unsigned size_stk(Stack* stk);

#endif // STACK_H
