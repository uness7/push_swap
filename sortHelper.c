#include "push_swap.h"

static int  findPosition(t_stack *a, int data)
{
    t_node	*temp;
    int		i;
    int		count;

    i = 0;
    count = 0;
    temp = a->peak;
    while (temp)
    {
        if (temp->index == data)
            count += i;
	i++;
        temp = temp->next;
    }
    return (count);
}

void    sortHelper(t_stack *a, t_stack *b, int min, int max)
{
	int	i;
	int	pos;

//	printf("entering helper generalkjA\n");
	while (max > min || max == 0)
	{
		i = 0;
		pos = (findPosition(b, max) < (stackSize(b) / 2));
		while (pos && i < 1)
		{
			if (b->peak->index == max && ++i)
				pa(a, b);
			else
				rb(b);
		}
		while (!pos && i < 1)
		{
			if (b->peak->index == max && ++i)
				pa(a, b);
			else
				rrb(b);
		}
		max--;
	}
}
