/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:17:44 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/24 14:13:06 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_newslen(size_t n, size_t start)
{
	if (n < start)
		return (n);
	return (start);
}

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char			*dest;
	unsigned int	i;

	i = ft_newslen(ft_strlen(s), start);
	n = ft_newslen(ft_strlen(s) - i, n);
	dest = malloc((n + 1));
	if (dest)
		ft_strlcpy(dest, s + i, n + 1);
	return (dest);
}
/*
int	main()
{
	char const	s[] = "01234";
	char	*dest;

	dest = ft_substr(s, 1, 1);
	printf("%s", dest);
	free (dest);
}*/
