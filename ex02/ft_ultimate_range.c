/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:46:26 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/09 17:48:55 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	size;
	int	*pointer;

	index = 0;
	size = max - min;
	pointer = malloc(size * sizeof(int));
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (pointer == 0)
	{
		*range = 0;
		return (-1);
	}
	while (index < size)
	{
		pointer[index] = min + index;
		index++;
	}
	*range = pointer;
	return (size);
}
