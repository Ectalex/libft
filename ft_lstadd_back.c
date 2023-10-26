/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:03:03 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/25 15:53:56 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst != 0)
		lst = &(*lst)->next;
	*lst = new;
}
/*
int	main()
{
	t_list	*lst;
	t_list	*new = ft_lstnew("test");
	ft_lstadd_back(&lst, new);
	printf("%s", lst->content);
}*/
