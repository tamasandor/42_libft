/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:10:45 by atamas            #+#    #+#             */
/*   Updated: 2023/11/14 18:48:21 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strlcat(char * restrict dst, const char * restrict src, int dstsize) 
{
	// dest size - 1 so null termination happens
	int	dest_length;
	int	src_length;
	int	i;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	i = dest_length;

	if (dstsize == 0)
		return (dest_length);
	while (i < dest_length - 1 && src != '\0')
	{
		dst[i] = src++;
		i++;
	}
	dst[i] = '\0';
	return (dest_length + src_length);
}
