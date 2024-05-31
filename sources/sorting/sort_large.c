
#include "../../includes/push_swap.h"

void	reduce_stack_a_to_3(t_node **stack_a, t_node **stack_b)
{
	int		min_rot_cost;
	t_node	*temp;

	while (ft_lstsize(*stack_a) > 3 && !check_sorted(*stack_a))
	{
		temp = *stack_a;
		min_rot_cost = rot_comb_ab(*stack_a, *stack_b);
		while (min_rot_cost >= 0)
		{
			if (min_rot_cost == calc_rarb(*stack_a, *stack_b, temp->number))
				min_rot_cost = apply_rarb(stack_a, stack_b, temp->number, 'a');
			else if (min_rot_cost == calc_rrarrb(*stack_a, *stack_b,
					temp->number))
				min_rot_cost = apply_rrarrb(stack_a, stack_b, temp->number,
						'a');
			else if (min_rot_cost == calc_rarrb(*stack_a, *stack_b,
					temp->number))
				min_rot_cost = apply_rarrb(stack_a, stack_b, temp->number, 'a');
			else if (min_rot_cost == calc_rrarb(*stack_a, *stack_b,
					temp->number))
				min_rot_cost = apply_rrarb(stack_a, stack_b, temp->number, 'a');
			else
				temp = temp->next;
		}
	}
}

t_node	*sort_b(t_node **stack_a)
{
	t_node	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) > 3 && !check_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !check_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !check_sorted(*stack_a))
		reduce_stack_a_to_3(stack_a, &stack_b);
	if (!check_sorted(*stack_a))
		sort_small(stack_a);
	return (stack_b);
}

t_node	**sort_a(t_node **stack_a, t_node **stack_b)
{
	int		min_rot_cost;
	t_node	*temp;

	while (*stack_b)
	{
		temp = *stack_b;
		min_rot_cost = rot_comb_ba(*stack_a, *stack_b);
		while (min_rot_cost >= 0)
		{
			if (min_rot_cost == calc_rarb_a(*stack_a, *stack_b, temp->number))
				min_rot_cost = apply_rarb(stack_a, stack_b, temp->number, 'b');
			else if (min_rot_cost == calc_rarrb_a(*stack_a, *stack_b,
					temp->number))
				min_rot_cost = apply_rarrb(stack_a, stack_b, temp->number, 'b');
			else if (min_rot_cost == calc_rrarrb_a(*stack_a, *stack_b,
					temp->number))
				min_rot_cost = apply_rrarrb(stack_a, stack_b, temp->number,
						'b');
			else if (min_rot_cost == calc_rrarb_a(*stack_a, *stack_b,
					temp->number))
				min_rot_cost = apply_rrarb(stack_a, stack_b, temp->number, 'b');
			else
				temp = temp->next;
		}
	}
	return (stack_a);
}

void	main_sort(t_node **stack_a)
{
	t_node *stack_b;
	int min_value;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = sort_b(stack_a);
		stack_a = sort_a(stack_a, &stack_b);
		min_value = check_nbr_index(*stack_a, smallest_nbr(*stack_a));
		if (min_value < ft_lstsize(*stack_a) - min_value)
		{
			while ((*stack_a)->number != smallest_nbr(*stack_a))
				ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->number != smallest_nbr(*stack_a))
				rra(stack_a, 0);
		}
	}
}