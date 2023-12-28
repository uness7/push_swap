#include "push_swap.h"

void	ft_norm(t_stack *a, t_stack *b, int *n)
{
	pb(a, b);
	rb(b);
	(*n)++;
}

static void sortHelper3(t_stack *a, t_stack *b, int ac)
{
//	printf("entering sorthelper 3\n");
	while (stackSize(a) > 8)
	{
		if (a->peak->index < ac - 8)
			pb(a, b);
		else
			ra(a);
	}
	sortFiveNodes(a, b);
	sortHelper(a, b, 0, ac - 9);
}

void    sort100Nodes(t_stack *a, t_stack *b, int ac, t_obj obj)
{
	initObj(&obj, a, ac);
//	printf("Entering outer loop. obj.a: %d, ac: %d\n", obj.a, ac);
	while (obj.a < ac - 48 )
	{
//		printf("Entering inner loop. obj.a: %d, obj.b: %d, ac: %d\n", obj.a, obj.b, ac);
		while (obj.a < obj.b && obj.a < ac - 48)
		{
			if (a->peak->index >= obj.max && a->peak->index < obj.max + 16 && ++obj.a)
				pb(a, b);
			else if (a->peak->index >= ac - obj.y - 20 && a->peak->index < ac - obj.y)
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
	sortHelper3(a, b, ac);
}
