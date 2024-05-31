#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	long			number;
	long			index;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

void				add_argument_to_stack(t_node **stack, char *arg);
void				process_quoted_argument(t_node **stack, char *arg);
void				print_error(void);
t_node				*parse_arguments(int argc, char **argv);
void				free_str(char **array);
void				reduce_stack_a_to_3(t_node **stack_a, t_node **stack_b);
t_node				*sort_b(t_node **stack_a);
t_node				**sort_a(t_node **stack_a, t_node **stack_b);
void				main_sort(t_node **stack_a);
void				sort_small(t_node **stack_a);
void				ft_add_back(t_node **stack, t_node *stack_new);
t_node				*ft_stack_new(int content);
int					check_nbr_index(t_node *stack_a, int number);
int					find_insert_position_b(t_node *stack_b, int number_push);
int					find_insert_position_a(t_node *stack_a, int number_push);
t_node				*lstlast(t_node *lst);
int					ft_lstsize(t_node *lst);
int					smallest_nbr(t_node *stack_a);
int					biggest_nbr(t_node *stack_a);
void				ra(t_node **stack_a, int j);
void				sa(t_node **stack_a, int j);
void				pa(t_node **stack_a, t_node **stack_b, int j);
void				rra(t_node **stack_a, int j);
void				ss(t_node **stack_a, t_node **stack_b, int j);
void				rr(t_node **stack_a, t_node **stack_b, int j);
void				rrr_part2(t_node **stack_b, int j);
void				rrr(t_node **stack_a, t_node **stack_b, int j);
void				pb(t_node **stack_a, t_node **stack_b, int j);
void				rrb(t_node **stack_b, int j);
void				rb(t_node **stack_b, int j);
void				sb(t_node **stack_b, int j);
int					apply_rarb(t_node **stack_a, t_node **stack_b, int c,
						char s);
int					apply_rrarrb(t_node **stack_a, t_node **stack_b, int c,
						char s);
int					apply_rrarb(t_node **stack_a, t_node **stack_b, int c,
						char s);
int					apply_rarrb(t_node **stack_a, t_node **stack_b, int c,
						char s);
int					rot_comb_ba(t_node *stack_a, t_node *stack_b);
int					rot_comb_ab(t_node *stack_a, t_node *stack_b);
void				free_stack(t_node **lst);
int					calc_rarb(t_node *stack_a, t_node *stack_b, int c);
int					calc_rrarrb(t_node *stack_a, t_node *stack_b, int c);
int					calc_rrarb(t_node *stack_a, t_node *stack_b, int c);
int					calc_rarrb(t_node *stack_a, t_node *stack_b, int c);
int					calc_rarb_a(t_node *stack_a, t_node *stack_b, int c);
int					calc_rrarrb_a(t_node *stack_a, t_node *stack_b, int c);
int					calc_rarrb_a(t_node *stack_a, t_node *stack_b, int c);
int					calc_rrarb_a(t_node *stack_a, t_node *stack_b, int c);
int					check_duplicates(t_node *stack_a);
int					check_sorted(t_node *stack_a);

#endif
