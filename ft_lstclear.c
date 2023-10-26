/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:25:44 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/25 16:37:22 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*e;

	while (*lst != 0)
	{
		e = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = e;
	}
}
/*
void	del(void *content)
{
	content = NULL;
}

int	main()
{
	t_list	*lst1 = malloc(sizeof(t_list));
	t_list  *lst2 = malloc(sizeof(t_list));
	t_list  *lst3 = malloc(sizeof(t_list));
	t_list  *lst4 = malloc(sizeof(t_list));

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = NULL;

	ft_lstclear(&lst1, del);

}*/
