/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:50:20 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:52:51 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void delete_content(void *content) {
    free(content);
}

int main() {
    t_list *node = malloc(sizeof(t_list));
    if (node == NULL)
        return 1;
    node->content = malloc(sizeof(int));
    if (node->content == NULL) {
        free(node);
        return 1;
    }
    *(int*)node->content = 42;
    ft_lstdelone(node, delete_content);
    return 0;
}
*/
