#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*new;

	if (b == NULL || b->peak == NULL)
		return ;
	new = create_node(b->peak->data);
	new->index = b->peak->index;
	new->next = a->peak;
	a->peak = new;
	pop(b);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*new;

	if (a == NULL || a->peak == NULL)
		return ;
	new = create_node(a->peak->data);
	new->index = a->peak->index;
	new->next = b->peak;
	b->peak = new;
	pop(a);
	write(1, "pb\n", 3);
}

void	sa(t_stack *stack)
{
	t_node	*temp;

	if (stack == NULL || stack->peak == NULL || stack->peak->next == NULL)
		return ;
	temp = stack->peak;
	stack->peak = stack->peak->next;
	temp->next = stack->peak->next;
	temp->index = stack->peak->index;
	stack->peak->next = temp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack)
{
	t_node	*temp;

	if (stack == NULL || stack->peak == NULL || stack->peak->next == NULL)
		return ;
	temp = stack->peak;
	stack->peak = stack->peak->next;
	temp->index = stack->peak->index;
	temp->next = stack->peak->next;
	stack->peak->next = temp;
	write(1, "sb\n", 3);
}

void	ra(t_stack *stack)
{
	t_node	*to_rotate;
	t_node	*temp;

	if (stack == NULL || stack->peak == NULL || stack->peak->next == NULL)
		return ;
	to_rotate = stack->peak;
	stack->peak = stack->peak->next;
	to_rotate->next = NULL;
	temp = stack->peak;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = to_rotate;
	write(1, "ra\n", 3);
}
