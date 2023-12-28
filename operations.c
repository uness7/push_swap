#include "push_swap.h"

void    pa(t_stack *a, t_stack *b)
{
    t_node  *new;

    if (b == NULL || b->peak == NULL)
        return ;
    new = createNode(b->peak->data);
    new->index = b->peak->index;
    new->next = a->peak;
    a->peak = new;
    pop(b);
    write(1, "pa\n", 3);
}

void    pb(t_stack *a, t_stack *b)
{
    t_node  *new;

    if (a == NULL || a->peak == NULL)
        return ;
    new = createNode(a->peak->data);
    new->index = a->peak->index;
    new->next = b->peak;
    b->peak = new;
    pop(a);
    write(1, "pb\n", 3);
}

void sa(t_stack *stack)
{
    t_node *temp;

    if (stack == NULL || stack->peak == NULL || stack->peak->next == NULL)
        return;
    temp = stack->peak;                 // Store the top node
    stack->peak = stack->peak->next;    // Move the second node to the top
    temp->next = stack->peak->next;     // Update the `next` of the original top node
    temp->index = stack->peak->index;
    stack->peak->next = temp;           // Set the original top as the second node
    write(1, "sa\n", 3);
}

void sb(t_stack *stack)
{
    t_node *temp;

    if (stack == NULL || stack->peak == NULL || stack->peak->next == NULL)
        return ;
    temp = stack->peak;
    stack->peak = stack->peak->next;
    temp->index = stack->peak->index;
    temp->next = stack->peak->next;
    stack->peak->next = temp;
    write(1, "sb\n", 3);
}

void    ra(t_stack *stack)
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
    write(1, "ra\n", 3);
}
