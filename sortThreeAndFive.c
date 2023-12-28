#include "push_swap.h"

void    sortThreeNodes(t_stack *a)
{
	t_node	*last;

//	printf("Entering sortThreeNodes\n");
	while (!isStackSorted(a))
	{
		last = lastNode(a);
		if (a->peak->data > last->data)
			ra(a);
		else if (a->peak->data > a->peak->next->data)
			sa(a);
		else if (a->peak->data < last->data)
			rra(a);
	}
}

void    sortFiveNodes(t_stack *a, t_stack *b)
{
	int		x;
	t_node	*last;

	x = 0;
//	printf("Entering sortFiveNodes\n");
	while (!isStackSorted(a) || x != 0)
	{
		last = lastNode(a);
		if ((a->peak->data > last->data) && (a->peak->next->data > last->data))
		{
			printf("xxx\n");
			rra(a);
		}
		else if (a->peak->data > last->data)
			ra(a);
		else if (a->peak->data > a->peak->next->data)
			sa(a);
		else if (isStackSorted(a) && x != 0)
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
