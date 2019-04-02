#include <stdio.h>
#include <stdlib.h>

#include "include/linkedlist.h"

int main()
{
    LinkedList* lst = NULL;
    init_lst(lst);

    int i = 0;
    for(; i < 10; i++)
    {
        int* temp = (int*) malloc(sizeof(int));
        *temp = i;

        //printf("main %i\n", i);

        push_lst(lst, (void*)temp);
    }


    printf("Hello world!\n");

    return EXIT_SUCCESS;
}
