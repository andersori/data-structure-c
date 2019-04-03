#include <stdio.h>
#include <stdlib.h>
#include "../include/stack.h"

Stack* init_stk()
{
    Stack* stk = (Stack*) malloc(sizeof(Stack));
    stk->_size = 0;
    stk->top = NULL;
    return stk;
}
void destroy_stk(Stack* stk)
{
    if(stk != NULL)
    {
        while(size_stk(stk) != 0)
        {
            pop_skt(stk);
        }

        return;
    }

    printf("Null Stack\n");
}

void push_stk(Stack* stk, data_type data)
{
    if(stk != NULL)
    {
        No_Stk* new_node = (No_Stk*) malloc(sizeof(No_Stk));

        if(new_node != NULL)
        {
            new_node->data = data;
            new_node->next = stk->top;
            stk->top = new_node;
            stk->_size++;

            return;
        }

        printf("Without memory\n");
        return;
    }

    printf("Null Stack\n");
}

void pop_skt(Stack* stk)
{
    if(stk != NULL)
    {
        if(stk->top != NULL)
        {
            No_Stk* removed = stk->top;
            stk->top = stk->top->next;

            free(removed);
            stk->_size--;
            return;
        }
    }

    printf("Null Stack\n");
    return;
}

data_type top_stk(Stack* stk)
{
    if(stk != NULL)
    {
        if(stk->top != NULL)
        {
            return stk->top->data;
        }

        printf("Empty Stack\n");
        return NULL;
    }

    printf("Null Stack\n");
    return;
}

unsigned size_stk(Stack* stk)
{
    if(stk != NULL)
    {
        return stk->_size;
    }

    printf("Null Stack\n");
    return;
}
