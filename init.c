#include "push_swap.h"

void    initObj(t_obj *obj, t_stack *a, int ac)
{
    obj->max = 0;
    obj->a = 0;
    obj->b = 16;
    obj->n = 1;
    obj->y = 20;
    indexStack(a, ac);
}

void    initStack(t_stack *stack)
{
    stack->peak = NULL;
}
