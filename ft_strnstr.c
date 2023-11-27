/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:05:37 by atamas            #+#    #+#             */
/*   Updated: 2023/11/27 15:40:22 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big_str, const char *small_str, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_of_small_str;

	i = 0;
	j = 0;
	if (*small_str == '\0')
		return ((char *)big_str);
	len_of_small_str = ft_strlen(small_str);
	while (i + len_of_small_str <= len && big_str[i] != '\0')
	{
		if (small_str[j] != '\0' && big_str[i] == small_str[j])
			j++;
		else if (small_str[j] == '\0')
			return (i -= j, (char *)big_str + i);
		else
			j = 0;
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*bigstr;
	char	*retstr;

	bigstr = "Students learning in the 42 school";
	// retstr = ft_strnstr(bigstr, "a", 12); test case fails it should not
	retstr = ft_strnstr(bigstr, "a", 12);
	printf("String is: %s", retstr);
}
