/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:06 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/25 17:00:55 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*elem;

	map = NULL;
	while (lst != 0)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == NULL)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, elem);
		lst = lst->next;
	}
	return (map);
}
/*
void	f(void *content)
{
	content += 8;
}

void	del(void *content)
{
	content = NULL;
}

int	main()
{
	t_list	*map;
	t_list	*lst1 = ft_lstnew("salut ");
	t_list	*lst2 = ft_lstnew("ca va");

	lst1->next = lst2;
	lst2->next = NULL;

	map = ft_lstmap(lst1, f, del);
	printf("%s", map->content);
	free(map);
}*/
