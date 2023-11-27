/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:10:45 by atamas            #+#    #+#             */
/*   Updated: 2023/11/27 13:05:43 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/* 
Appends string src to dst.
Return: 
 */
int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	i = dest_length;
	if (dstsize == 0)
		return (dest_length);
	while (i < dstsize && *src != '\0')
	{
		dst[i] = *src++;
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (dest_length + src_length);
}

/* #include <stdio.h>
int	main(void)
{
	char dest[20] = "Andor ";
	char *from = "is happy";

	printf("The string is %s with nr: %d", dest, ft_strlcat(dest, from, 14));
} */