

#include "../../includes/push_swap.h"

// This function sort the stack if there are only
// three elements in the stack.
void	sort_small(t_node **stack_a)
{
	if (smallest_nbr(*stack_a) == (*stack_a)->number)
	{
		rra(stack_a, 0);
		sa(stack_a, 0);
	}
	else if (biggest_nbr(*stack_a) == (*stack_a)->number)
	{
		ra(stack_a, 0);
		if (!check_sorted(*stack_a))
			sa(stack_a, 0);
	}
	else
	{
		if (check_nbr_index(*stack_a, biggest_nbr(*stack_a)) == 1)
			rra(stack_a, 0);
		else
			sa(stack_a, 0);
	}
}