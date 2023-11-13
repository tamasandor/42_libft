/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:29:50 by atamas            #+#    #+#             */
/*   Updated: 2023/11/13 22:07:56 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	unsigned char		*dst_iterator;
	const unsigned char	*src_iterator;

	dst_iterator = (unsigned char *)dst;
	src_iterator = (const unsigned char *)src;
	while (n > 0)
	{
		*dst_iterator = *src_iterator;
		dst_iterator++;
		src_iterator++;
		n--;
	}
	return (dst);
}
