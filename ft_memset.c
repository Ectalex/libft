/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:51:47 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/18 12:00:36 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		i++;
		((char *)s)[n - i] = c;
	}
	return (s);
}
/*
int	main()
{
	char *str[10];

	printf("%s", (char *)ft_memset(str, 'p', 11));
}*/
