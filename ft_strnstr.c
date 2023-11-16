/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   !!ft_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:05:37 by atamas            #+#    #+#             */
/*   Updated: 2023/11/16 16:24:12 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big_string, const char *small_string, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*small_string == '\0')
		return ((char *)big_string);
	while (i < len && big_string[i] != '\0')
	{
		if (big_string[i] == small_string[j])
		{
			j++;
		}
		else
			j = 0;
		i++;
	}
	i -= j;
	if (j != 0)
		return ((char *)big_string + i);
	return (0);
}
