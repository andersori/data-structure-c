#include <stdio.h>
#include <stdlib.h>

#include "include/linkedlist.h"

int main()
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

    return 0;
}
