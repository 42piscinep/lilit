/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:03:51 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:46:15 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main() {
    
    t_list *head = NULL;
    t_list *node1 = malloc(sizeof(t_list));
    if (node1 == NULL)
        return 1; 
    node1->content = "First node";
    node1->next = NULL;

    ft_lstadd_front(&head, node1);
    
    t_list *node2 = malloc(sizeof(t_list));
    if (node2 == NULL)
        return 1;
    node2->content = "New first node";
    node2->next = NULL;

   ft_lstadd_front(&head, node2);

        t_list *current = head;
    while (current != NULL) {
        printf("%s\n", (char*)current->content);
        current = current->next;
    }

    free(node1);
    free(node2);

    return 0;
}
*/
