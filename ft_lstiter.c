/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:18:59 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/25 13:43:53 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != 0)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void    f(void *content)
{
        *(int *)content += 1;
}

int     main()
{
        t_list *lst;
        int     *b;
        *b = 2;
        lst = ft_lstnew(b);
        ft_lstiter(lst, f);
        printf("%d", *(int *)lst->content);
}*/
