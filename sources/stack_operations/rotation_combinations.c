
#include "../../includes/push_swap.h"

int	rot_comb_ba(t_node *stack_a, t_node *stack_b)
{
	int		min_rot_cost;
	t_node	*temp;

	temp = stack_b;
	min_rot_cost = calc_rrarrb_a(stack_a, stack_b, stack_b->number);
	while (temp)
	{
		if (min_rot_cost > calc_rarb_a(stack_a, stack_b, temp->number))
			min_rot_cost = calc_rarb_a(stack_a, stack_b, temp->number);
		if (min_rot_cost > calc_rrarrb_a(stack_a, stack_b, temp->number))
			min_rot_cost = calc_rrarrb_a(stack_a, stack_b, temp->number);
		if (min_rot_cost > calc_rarrb_a(stack_a, stack_b, temp->number))
			min_rot_cost = calc_rarrb_a(stack_a, stack_b, temp->number);
		if (min_rot_cost > calc_rrarb_a(stack_a, stack_b, temp->number))
			min_rot_cost = calc_rrarb_a(stack_a, stack_b, temp->number);
		temp = temp->next;
	}
	return (min_rot_cost);
}

int	rot_comb_ab(t_node *stack_a, t_node *stack_b)
{
	int min_rot_cost;
	t_node *temp;

	temp = stack_a;
	min_rot_cost = calc_rrarrb(stack_a, stack_b, stack_a->number);
	while (temp)
	{
		if (min_rot_cost > calc_rarb(stack_a, stack_b, temp->number))
			min_rot_cost = calc_rarb(stack_a, stack_b, temp->number);
		if (min_rot_cost > calc_rrarrb(stack_a, stack_b, temp->number))
			min_rot_cost = calc_rrarrb(stack_a, stack_b, temp->number);
		if (min_rot_cost > calc_rarrb(stack_a, stack_b, temp->number))
			min_rot_cost = calc_rarrb(stack_a, stack_b, temp->number);
		if (min_rot_cost > calc_rrarb(stack_a, stack_b, temp->number))
			min_rot_cost = calc_rrarb(stack_a, stack_b, temp->number);
		temp = temp->next;
	}
	return (min_rot_cost);
}