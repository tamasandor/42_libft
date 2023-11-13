/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:01:52 by atamas            #+#    #+#             */
/*   Updated: 2023/11/13 21:25:56 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void *ft_memchr(const void *s, int c, int n)

// >> locates the firsst occurence of c converted to unsigned char in string s
// return the pointer to the loaction or NULL if none;q

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char) c)
			return (ptr);
		ptr++;
		n--;
	}
	return (0);
}
