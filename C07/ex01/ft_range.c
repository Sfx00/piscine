/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:51:46 by obajali           #+#    #+#             */
/*   Updated: 2024/07/15 21:51:50 by obajali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*ptr;
	int	i;

	if (max <= min)
	{
		return (0);
	}
	size = (max - min) + 1;
	ptr = (int *)malloc(size * 4);
	if (!ptr)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
