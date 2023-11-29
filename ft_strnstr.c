/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:05:37 by atamas            #+#    #+#             */
/*   Updated: 2023/11/29 14:54:56 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big_str, const char *small_str, size_t len)
{
	size_t	i;
	size_t	small_len;

	i = 0;
	if (*small_str == '\0')
		return ((char *)big_str);
	small_len = ft_strlen(small_str);
	if (len < 0)
		len = ft_strlen(big_str);
	while (i < len)
	{
		if (i + small_len > len)
			return (0);
		if (big_str[i] == *small_str)
		{
			if (ft_strncmp((char *)big_str + i, (char *)small_str, small_len) == 0)
				return ((char *)&big_str[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	*bigstr;
	char	*retstr;

	bigstr = "Students lealma in the 42 school";
	// retstr = ft_strnstr(bigstr, "a", 12); test case fails it should not
	retstr = ft_strnstr(bigstr, "alma", 12);
	printf("String is: %s", retstr);
} */