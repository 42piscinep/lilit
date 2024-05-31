
#include "../../includes/push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	add_argument_to_stack(t_node **stack, char *arg)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	if (*arg == '-' || *arg == '+')
	{
		if (*arg == '-')
			sign = -1;
		arg++;
	}
	while (*arg)
	{
		if (*arg < '0' || *arg > '9')
			print_error();
		num = num * 10 + (*arg - '0');
		arg++;
		if (num * sign > INT_MAX || num * sign < INT_MIN)
			print_error();
	}
	ft_add_back(stack, ft_stack_new(num * sign));
}

void	process_quoted_argument(t_node **stack, char *arg)
{
	char	**tokens;
	char	**ptr;

	tokens = ft_split(arg, ' ');
	if (!tokens)
		print_error();
	ptr = tokens;
	while (*ptr)
	{
		add_argument_to_stack(stack, *ptr);
		ptr++;
	}
	free_str(tokens);
	free(tokens);
}

t_node	*parse_arguments(int argc, char **argv)
{
	t_node	*stack;
	int		i;

	stack = NULL;
	i = 1;
	if (argc == 2)
	{
		process_quoted_argument(&stack, argv[1]);
	}
	else
	{
		while (i < argc)
		{
			add_argument_to_stack(&stack, argv[i]);
			i++;
		}
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_node *stack_a;
	stack_a = NULL;

	if (argc < 2)
		print_error();
	stack_a = parse_arguments(argc, argv);
	if (check_duplicates(stack_a))
	{
		free_stack(&stack_a);
		print_error();
	}
	if (!check_sorted(stack_a))
		main_sort(&stack_a);

	free_stack(&stack_a);
	return (0);
}