/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:40:08 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/09 17:45:23 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*pointer;

	index = 0;
	pointer = malloc(range * sizeof(int));
	range = max - min;
	if (min >= max)
		return (0);
	if (pointer == NULL)
		return (0);
	while (index < range)
	{
		pointer[index] = index + min;
		index++;
	}
	return (pointer);
}
