#include "push_swap.h"

void	init_obj(t_obj *obj, t_stack *a, int ac)
{
	obj->max = 0;
	obj->a = 0;
	obj->b = 16;
	obj->n = 1;
	obj->y = 20;
	index_stack(a, ac);
}

void	init_stack(t_stack *stack)
{
	stack->peak = NULL;
}
