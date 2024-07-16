/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:53:18 by obajali           #+#    #+#             */
/*   Updated: 2024/07/15 21:53:21 by obajali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	lents(char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	len;
	int	lent;

	len = 0;
	i = -1;
	while (str[++i])
	{
		j = -1;
		while (str[i][++j])
			len++;
	}
	i = -1;
	lent = 0;
	while (sep[++i])
	{
		lent++;
	}
	lent = lent * (size - 1);
	len = len + lent;
	return (len);
}

void	copy(char **str, char *ptr, char *sep)
{
	int	i;
	int	j;
	int	a;

	i = -1;
	a = 0;
	while (str[++i])
	{
		j = -1;
		while (str[i][++j])
		{
			ptr[a++] = str[i][j];
		}
		j = -1;
		while (sep[++j] && str[i + 1])
		{
			ptr[a++] = sep[j];
		}
	}
	ptr[a] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size <= 0)
	{
		str = (char *)malloc(1);
		if (str)
			str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(lents(strs, sep, size) + 1);
	if (!str)
		return (NULL);
	copy(strs, str, sep);
	return (str);
}
