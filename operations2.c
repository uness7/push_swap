#include "push_swap.h"

void    rb(t_stack *stack)
{
    t_node  *to_rotate;
    t_node  *temp;

    if (stack == NULL || stack->peak == NULL || stack->peak->next == NULL)
        return ;
    to_rotate = stack->peak; // store the the top element of the stack 
    stack->peak = stack->peak->next; // update the peak element to be the second top element
    to_rotate->next = NULL;
    
    temp = stack->peak; // traverse the stack to reach the last element
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = to_rotate; // set it to be the peak element previously destroyed
    write(1, "rb\n", 3);
}

void    rra(t_stack *a)
{
    t_node  *second_last;
    t_node  *last;

    if (a == NULL || a->peak == NULL || a->peak->next == NULL)
        return ;
    last = a->peak;
    second_last = NULL;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    last->next = a->peak;
    a->peak = last;
    second_last->next = NULL;
    write(1, "rra\n", 4);
}

void    rrb(t_stack *a)
{
    t_node  *second_last;
    t_node  *last;

    if (a == NULL || a->peak == NULL || a->peak->next == NULL)
        return ;
    last = a->peak;
    second_last = NULL;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    last->next = a->peak;
    a->peak = last;
    second_last->next = NULL;
    write(1, "rrb\n", 4);
}
