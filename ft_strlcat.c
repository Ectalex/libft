/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:04:44 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/19 16:32:36 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j] && j < n)
		j++;
	while (src[i] && n && (i + j) < n - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (i + j < n)
		dest[i + j] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i + j);
}
/*
int	main()
{
	printf("%d", ft_strlcat("coucou", "ca va ?", 7));
}*/
