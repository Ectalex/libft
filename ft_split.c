/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:17:29 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/25 17:54:10 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	size_t	n;

	n = 0;
	while (s[i] != c && s[i])
	{
		n++;
		i++;
	}
	return (n);
}

static int	ft_free(char **str, int j)
{
	if (str[j] == 0)
	{
		while (j > 0)
		{
			j--;
			free(str[j]);
		}
		free(str);
		j = -42;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		n;
	int			word;
	int			j;
	char		**str;

	i = 0;
	j = -1;
	word = ft_count_word(s, c);
	str = (char **)malloc((word + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		n = ft_size_word(s, c, i);
		str[j] = ft_substr(s, i, n);
		j = ft_free(str, j);
		if (str[j] == NULL || j == -42)
			return (NULL);
		i += n;
	}
	str[j] = 0;
	return (str);
}
/*
int	main()
{
	char	**dest;
	size_t	i;

	i = 0;
	dest = ft_split("coucou ca va ?", ' ');
	while (i <= 3)
	{
		printf("%s", dest[i]);
		i++;
	}
	free (dest);
}*/
