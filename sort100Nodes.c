#include "push_swap.h"

void	ft_norm(t_stack *a, t_stack *b, int *n)
{
	pb(a, b);
	rb(b);
	(*n)++;
}

static void	sort_helper3(t_stack *a, t_stack *b, int ac)
{
	while (stack_size(a) > 8)
	{
		if (a->peak->index < ac - 8)
			pb(a, b);
		else
			ra(a);
	}
	sort_five_nodes(a, b);
	sort_helper(a, b, 0, ac - 9);
}

void	sort_100_nodes(t_stack *a, t_stack *b, int ac, t_obj obj)
{
	init_obj(&obj, a, ac);
	while (obj.a < ac - 48)
	{
		while (obj.a < obj.b && obj.a < ac - 48)
		{
			if (a->peak->index >= obj.max \
				&& a->peak->index < obj.max + 16 && ++obj.a)
				pb(a, b);
			else if (a->peak->index >= ac - obj.y - 20 \
				&& a->peak->index < ac - obj.y)
			{
				ft_norm(a, b, &obj.n);
			}
			else
				ra(a);
			if (obj.n == 20 && obj.y >= 20)
				obj.y -= 12;
		}
		obj.b += 16;
		obj.max += 16;
	}
	sort_helper3(a, b, ac);
}
