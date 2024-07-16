/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:51:08 by obajali           #+#    #+#             */
/*   Updated: 2024/07/15 21:51:12 by obajali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	lent(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(lent(src) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
