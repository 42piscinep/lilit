
#include "../../includes/push_swap.h"

int	calc_rarb_a(t_node *stack_a, t_node *stack_b, int value)
{
	int	count;

	count = find_insert_position_a(stack_a, value);
	if (count < check_nbr_index(stack_b, value))
		count = check_nbr_index(stack_b, value);
	return (count);
}

int	calc_rrarrb_a(t_node *stack_a, t_node *stack_b, int value)
{
	int	count;

	count = 0;
	if (find_insert_position_a(stack_a, value))
		count = ft_lstsize(stack_a) - find_insert_position_a(stack_a, value);
	if ((count < (ft_lstsize(stack_b) - check_nbr_index(stack_b, value)))
		&& check_nbr_index(stack_b, value))
		count = ft_lstsize(stack_b) - check_nbr_index(stack_b, value);
	return (count);
}

int	calc_rarrb_a(t_node *stack_a, t_node *stack_b, int value)
{
	int	count;

	count = 0;
	if (check_nbr_index(stack_b, value))
		count = ft_lstsize(stack_b) - check_nbr_index(stack_b, value);
	count = find_insert_position_a(stack_a, value) + count;
	return (count);
}

int	calc_rrarb_a(t_node *stack_a, t_node *stack_b, int value)
{
	int count;

	count = 0;
	if (find_insert_position_a(stack_a, value))
		count = ft_lstsize(stack_a) - find_insert_position_a(stack_a, value);
	count = check_nbr_index(stack_b, value) + count;
	return (count);
}