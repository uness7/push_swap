#include "push_swap.h"

void	sort(t_stack *a, t_stack *b, int ac, t_obj obj)
{
	if (ac <= 3)
		sort_three_nodes(a);
	else if (ac > 3 && ac <= 5)
		sort_five_nodes(a, b);
	else if (ac <= 100)
		sort_100_nodes(a, b, ac, obj);
	else
		sort_500_nodes(a, b, ac, obj);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		arr[ac - 1];
	int		size;
	t_obj	obj;

	if (ac > 1)
	{
		if (!is_input_valid(ac, av) || !is_input_valid_helper(ac, av))
			exit(EXIT_FAILURE);
		fill_arr(arr, ac, av);
		if (has_array_dup(arr, ac - 1))
			exit(EXIT_FAILURE);
		size = (sizeof arr / sizeof arr[0]);
		init_stack(&a);
		init_stack(&b);
		fill_stack(&a, arr, size);
		sort(&a, &b, ac - 1, obj);
		free_stack(&a);
		free_stack(&b);
	}
	return (0);
}
