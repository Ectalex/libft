/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:59:24 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/19 13:03:56 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (little[i])
		i++;
	if (i == 0)
		return ((char *)big);
	i = 0;
	while (i < n && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j]
			&& little[j] != '\0' && i + j < n)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	printf("%s", (char *)ft_strnstr("bon on fait quoi ?", "sadkja asd", 8));
}*/
