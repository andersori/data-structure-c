#include <stdlib.h>
#include <stdio.h>
#include "../include/linkedlist.h"

//simulating private method
No* get_node_lst(LinkedList* lst, unsigned pos)
{
    if(pos < size_lst(lst))
    {
        No* temp = lst->root;

        int i = 0;
        for(;i < size_lst(lst); i++)
        {
            if(i == pos)
            {
                return temp;
            }

            temp = temp->next;
        }
    }

    return NULL;
}

LinkedList* init_lst(){
    LinkedList* lst = (LinkedList*) malloc(sizeof(LinkedList));

    lst->_size = 0;
    lst->root = NULL;
    lst->last = NULL;

    return lst;
}

void destroy_lst(LinkedList* lst)
{
    while(size_lst(lst) > 0)
    {
        remove_lst(lst, 0);
    }
}

void push_lst(LinkedList* lst, data_type data)
{
    No* new_node = (No*) malloc(sizeof(No));

    if(new_node != NULL)
    {
        new_node->data = data;

        if(lst->root == NULL)
        {
            lst->root = new_node;
            lst->last = lst->root;
        }
        else
        {
            lst->last->next = new_node;
            lst->last = new_node;
        }

        lst->_size++;
    }
    else
    {
        //without memory
        return;
    }
}

void remove_lst(LinkedList* lst, unsigned pos)
{
    if(pos == 0)
    {
        No* removed = lst->root;

        lst->root = lst->root->next;

        free(removed);
        lst->_size--;
    }
    else
    {
        No* prev = get_node_lst(lst, pos-1);

        if(prev != NULL)
        {
            No* removed = prev->next;
            prev->next = removed->next;

            free(removed);
            lst->_size--;
        }
        else
        {
            //out of range
            printf("Possition %i is not available!\n", pos);
            return;
        }
    }
}

data_type get_lst(LinkedList* lst, unsigned pos)
{
    No* result = get_node_lst(lst, pos);

    if(result != NULL)
    {
        return result->data;
    }
    else
    {
        printf("Possition %i is not available!\n", pos);
        return;
    }
}

unsigned size_lst(LinkedList* lst)
{
    return lst->_size;
}

void print_lst(LinkedList* lst)
{
    int i = 0;
    for(; i < size_lst(lst); i++)
    {
        printf("Item: %i\n", get_lst(lst, i));
    }
}
