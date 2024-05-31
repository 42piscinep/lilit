
#include "../../includes/push_swap.h"

int	apply_rarb(t_node **stack_a, t_node **stack_b, int number, char letter)
{
	if (letter == 'a')
	{
		while ((*stack_a)->number != number && find_insert_position_b(*stack_b,
				number) > 0)
			rr(stack_a, stack_b, 0);
		while ((*stack_a)->number != number)
			ra(stack_a, 0);
		while (find_insert_position_b(*stack_b, number) > 0)
			rb(stack_b, 0);
		pb(stack_a, stack_b, 0);
	}
	else
	{
		while ((*stack_b)->number != number && find_insert_position_a(*stack_a,
				number) > 0)
			rr(stack_a, stack_b, 0);
		while ((*stack_b)->number != number)
			rb(stack_b, 0);
		while (find_insert_position_a(*stack_a, number) > 0)
			ra(stack_a, 0);
		pa(stack_a, stack_b, 0);
	}
	return (-1);
}

int	apply_rrarrb(t_node **stack_a, t_node **stack_b, int number, char letter)
{
	if (letter == 'a')
	{
		while ((*stack_a)->number != number && find_insert_position_b(*stack_b,
				number) > 0)
			rrr(stack_a, stack_b, 0);
		while ((*stack_a)->number != number)
			rra(stack_a, 0);
		while (find_insert_position_b(*stack_b, number) > 0)
			rrb(stack_b, 0);
		pb(stack_a, stack_b, 0);
	}
	else
	{
		while ((*stack_b)->number != number && find_insert_position_a(*stack_a,
				number) > 0)
			rrr(stack_a, stack_b, 0);
		while ((*stack_b)->number != number)
			rrb(stack_b, 0);
		while (find_insert_position_a(*stack_a, number) > 0)
			rra(stack_a, 0);
		pa(stack_a, stack_b, 0);
	}
	return (-1);
}

int	apply_rrarb(t_node **stack_a, t_node **stack_b, int number, char letter)
{
	if (letter == 'a')
	{
		while ((*stack_a)->number != number)
			rra(stack_a, 0);
		while (find_insert_position_b(*stack_b, number) > 0)
			rb(stack_b, 0);
		pb(stack_a, stack_b, 0);
	}
	else
	{
		while (find_insert_position_a(*stack_a, number) > 0)
			rra(stack_a, 0);
		while ((*stack_b)->number != number)
			rb(stack_b, 0);
		pa(stack_a, stack_b, 0);
	}
	return (-1);
}

int	apply_rarrb(t_node **stack_a, t_node **stack_b, int number, char letter)
{
	if (letter == 'a')
	{
		while ((*stack_a)->number != number)
			ra(stack_a, 0);
		while (find_insert_position_b(*stack_b, number) > 0)
			rrb(stack_b, 0);
		pb(stack_a, stack_b, 0);
	}
	else
	{
		while (find_insert_position_a(*stack_a, number) > 0)
			ra(stack_a, 0);
		while ((*stack_b)->number != number)
			rrb(stack_b, 0);
		pa(stack_a, stack_b, 0);
	}
	return (-1);
}