/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:44:53 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:44:39 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)

{
	t_list	*new_node;

	new_node = ((t_list *)malloc(sizeof (t_list)));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->content = content;
	return (new_node);
}
/*
int main(void)
{
    int *p = malloc(sizeof(int));
    if (!p)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    *p = 42;

    t_list *node = ft_lstnew(p);

    if (node == NULL) {
        fprintf(stderr, "Failed to create a new list node\n");
        free(p);
        return EXIT_FAILURE;
    }

    
    printf("Node content: %d\n", *(int *)node->content);

    
    free(node);
    free(p);

    return EXIT_SUCCESS;
}
*/
