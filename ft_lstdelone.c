/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:12:11 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/25 16:05:03 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	content = NULL;
}

int	main()
{
	t_list	*lst = ft_lstnew("test");
	printf("%s", lst->content);
	ft_lstdelone(lst, del);
}*/
