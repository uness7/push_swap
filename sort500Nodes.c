#include "push_swap.h"

void    sort500Nodes(t_stack *a, t_stack *b, int ac, t_obj obj)
{
    initObj(&obj, a, ac);
    obj.y = 160;
    obj.b = 40;
    while (obj.a < ac - 200)
    {
	while (obj.a < obj.b && obj.a < ac - 200)
	{
		if (a->peak->index >= obj.max && a->peak->index < obj.max + 40 && ++obj.a)
			pb(a, b);
		else if (a->peak->index >= ac - obj.y - 40 && a->peak->index < ac - obj.y)
			ft_norm(a, b, &obj.n);
		else
			ra(a);
		if ((obj.n == 40 && obj.y >= 120) || (obj.n == 80 && obj.y >= 80)
			|| (obj.n == 120 && obj.y >= 40))
		obj.y -= 40;
	}
	obj.b += 40;
	obj.max += 40;
    }
	while (a->peak)
		pb(a, b);
    sortHelper(a, b, 0, ac - 1);
}
