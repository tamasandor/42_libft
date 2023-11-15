/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:10:34 by atamas            #+#    #+#             */
/*   Updated: 2023/11/15 13:11:43 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	const char	*first_string;
	const char	*second_string;

	first_string = (unsigned char *)s1;
	second_string = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*first_string != *second_string)
		{
			return (*first_string - *second_string);
		}
		first_string++;
		second_string++;
	}
	return (0);
}
