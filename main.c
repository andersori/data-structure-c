#include <stdio.h>
#include <stdlib.h>

#include "include/linkedlist.h"
#include "include/stack.h"

void test_linked_list();
void test_stack();

int main()
{
    test_stack();
    return 0;
}

void test_stack()
{
    Stack* stk = init_stk();

    push_stk(stk, 1);
    push_stk(stk, 2);
    push_stk(stk, 3);
    push_stk(stk, 4);
    push_stk(stk, 5);
    push_stk(stk, 6);

    printf("Antes\n");
    printf("Topo: %d\n", top_stk(stk));
    printf("Tamanho: %d\n", size_stk(stk));


    pop_skt(stk);

    printf("\nDepois\n");
    printf("Topo: %d\n", top_stk(stk));
    printf("Tamanho: %d\n", size_stk(stk));

    destroy_stk(stk);
}

void test_linked_list()
{
    LinkedList* lst = init_lst();
    printf("Tamanho: %d\n", size_lst(lst));

    push_lst(lst, 1);
    push_lst(lst, 2);
    push_lst(lst, 3);
    push_lst(lst, 4);
    push_lst(lst, 5);

    printf("Tamanho: %d\n", size_lst(lst));

    printf("Antes\n");
    print_lst(lst);


    remove_lst(lst, 10);
    get_lst(lst, 10);


    printf("Depois\n");
    print_lst(lst);
    destroy_lst(lst);
}
