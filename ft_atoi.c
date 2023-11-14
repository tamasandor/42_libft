/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:16:55 by atamas            #+#    #+#             */
/*   Updated: 2023/11/14 19:56:06 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	minus;
	int	integer;

	minus = 1;
	integer = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n' || *str == '\v' || *str == '\f')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str > 9)
	{
		str++;
	}
	if (*str > 9)
	{
		integer = integer * 10 + (*str - '0');
		str++;
		// integer = ft_atoi(*str % 10);
	}
	else if (*str >= 0 && *str <= 9)
	{
		
	}
	return (integer * minus);
}
