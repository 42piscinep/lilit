
#include "../../includes/push_swap.h"

int	calc_rarb(t_node *stack_a, t_node *stack_b, int value)
{
	int	count;

	count = find_insert_position_b(stack_b, value);
	if (count < check_nbr_index(stack_a, value))
		count = check_nbr_index(stack_a, value);
	return (count);
}

int	calc_rrarrb(t_node *stack_a, t_node *stack_b, int value)
{
	int	count;

	count = 0;
	if (find_insert_position_b(stack_b, value))
		count = ft_lstsize(stack_b) - find_insert_position_b(stack_b, value);
	if ((count < (ft_lstsize(stack_a) - check_nbr_index(stack_a, value)))
		&& check_nbr_index(stack_a, value))
		count = ft_lstsize(stack_a) - check_nbr_index(stack_a, value);
	return (count);
}

int	calc_rrarb(t_node *stack_a, t_node *stack_b, int value)
{
	int	count;

	count = 0;
	if (check_nbr_index(stack_a, value))
		count = ft_lstsize(stack_a) - check_nbr_index(stack_a, value);
	count = find_insert_position_b(stack_b, value) + count;
	return (count);
}

int	calc_rarrb(t_node *stack_a, t_node *stack_b, int value)
{
	int count;

	count = 0;
	if (find_insert_position_b(stack_b, value))
		count = ft_lstsize(stack_b) - find_insert_position_b(stack_b, value);
	count = check_nbr_index(stack_a, value) + count;
	return (count);
}