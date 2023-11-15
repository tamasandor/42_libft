/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:41:13 by atamas            #+#    #+#             */
/*   Updated: 2023/11/15 16:07:28 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, int n);

void	*ft_calloc(int count, int size)
{
	void *start_of_memory;

	start_of_memory = malloc(count * size);
	if (!start_of_memory)
		return (NULL);
	ft_bzero(start_of_memory, count);
	return (start_of_memory);
}

