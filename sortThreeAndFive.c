#include "push_swap.h"

void	sort_three_nodes(t_stack *a)
{
	t_node	*last;

	while (!is_stack_sorted(a))
	{
		last = last_node(a);
		if (a->peak->data > last->data)
			ra(a);
		else if (a->peak->data > a->peak->next->data)
			sa(a);
		else if (a->peak->data < last->data)
			rra(a);
	}
}

void	sort_five_nodes(t_stack *a, t_stack *b)
{
	int		x;
	t_node	*last;

	x = 0;
	while (!is_stack_sorted(a) || x != 0)
	{
		last = last_node(a);
		if ((a->peak->data > last->data) && (a->peak->next->data > last->data))
			rra(a);
		else if (a->peak->data > last->data)
			ra(a);
		else if (a->peak->data > a->peak->next->data)
			sa(a);
		else if (is_stack_sorted(a) && x != 0)
		{
			pa(a, b);
			x--;
		}
		else
		{
			pb(a, b);
			x++;
		}
	}
}
