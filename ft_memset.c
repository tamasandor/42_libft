/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:35:26 by atamas            #+#    #+#             */
/*   Updated: 2023/11/14 18:53:30 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len != 0)
	{
		*ptr = (unsigned char) c;
		len--;
		ptr++;
	}
	return (b);
}
