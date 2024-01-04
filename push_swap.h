#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}			t_node;

typedef struct s_stack
{
	t_node	*peak;
}		t_stack;

typedef struct s_obj
{
	int	max;
	int	a;
	int	b;
	int	y;
	int	n;
}		t_obj;

void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *a, t_stack *b);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *a, t_stack *b);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

void	sort_three_nodes(t_stack *a);
void	sort_five_nodes(t_stack *a, t_stack *b);
void	sort_100_nodes(t_stack *a, t_stack *b, int ac, t_obj obj);
void	sort_500_nodes(t_stack *a, t_stack *b, int ac, t_obj obj);
void	sort_helper(t_stack *a, t_stack *b, int min, int max);
void	sort(t_stack *a, t_stack *b, int ac, t_obj obj);
void	init_obj(t_obj *obj, t_stack *a, int ac);
void	init_stack(t_stack *a);
void	fill_stack(t_stack *a, int arr[], int size);
void	fill_arr(int arr[], int ac, char **av);
void	display_stack(t_stack *a);
void	free_stack(t_stack *a);
void	index_stack(t_stack *a, int ac);
void	print_error(void);
void	pop(t_stack *a);
void	ft_norm(t_stack *a, t_stack *b, int *n);

t_node	*create_node(int data);
t_node	*last_node(t_stack *a);

int		*sort_array(t_stack *a, int ac);
int		has_array_dup(int arr[], int size);
int		is_stack_sorted(t_stack *a);
int		is_input_valid(int ac, char **av);
int		is_input_valid_helper(int ac, char **av);
int		stack_size(t_stack *a);
int		is_stack_empty(t_stack *stack);
int		ft_atoi(char *str);
int		ft_isdigit(char c);

#endif
