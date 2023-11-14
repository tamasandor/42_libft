/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:39:33 by atamas            #+#    #+#             */
/*   Updated: 2023/11/14 12:00:08 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, int len)
{
	char	*destination;
	const char	*source;

	destination = (char *)dst;
	source = (const char *)src;
	if (*destination == *source || len == 0)
	{
		return (dst);
	}
	while (len-- > 0)
	{
		*destination++ = *source++;
	}
	return (dst);
}
