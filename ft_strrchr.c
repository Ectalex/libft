/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:13:24 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/18 13:20:32 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if ((char)c == '\0')
		return ((char *)str + i);
	while (i-- != 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
	}
	return (0);
}
/*
int	main()
{
	printf("le resultat est %s\n", ft_strrchr("1coulou", '1'));
	printf("le resultat est %s", strrchr("1coulou", '1'));
}*/
