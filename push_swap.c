#include "push_swap.h"

void    sort(t_stack *a, t_stack *b, int ac, t_obj obj)
{
    if (ac <= 3)
        sortThreeNodes(a);
    else if (ac > 3 && ac <= 5)
        sortFiveNodes(a, b);
    else if (ac <= 100)
        sort100Nodes(a, b, ac, obj);
    else
        sort500Nodes(a, b, ac, obj);
}

int main(int ac, char **av)
{
    t_stack     a;
    t_stack     b;
    int         arr[ac - 1];
    int         size;
    t_obj       obj;

    if (ac > 1)
    {
        if (!isInputValid(ac, av))
            exit(EXIT_FAILURE);
        fillArr(arr, ac, av);
        if (hasArrayDup(arr, ac - 1))
            exit(EXIT_FAILURE);
        size = (sizeof arr / sizeof arr[0]);
        initStack(&a);
        initStack(&b);
        fillStack(&a, arr, size);

        /*
        printf("Stack A: ");
        displayStack(&a);
        printf("Stack B: ");
        displayStack(&b);
        displayStack(&b);
        */

        sort(&a, &b, ac - 1, obj);

        /*
        printf("Stack A: ");
        displayStack(&a);
        printf("Stack B: ");
        displayStack(&b);
        */


        freeStack(&a);
        freeStack(&b);
        return (0);
    }
}
