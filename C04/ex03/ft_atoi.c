/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:49:02 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/27 19:24:03 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_skip_spaces(char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\r'
		|| *str == '\f' || *str == '\t' || *str == '\v')
		str++;
	return (str);
}

char	*ft_skip_signs(char *str, int *negative)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*negative = *negative + 1;
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	negative;
	int	result;
	int	mult;
	int	i;

	str = ft_skip_spaces(str);
	negative = 0;
	str = ft_skip_signs(str, &negative);
	mult = 1;
	i = 0;
	result = 0;
	while (i < ft_strlen(str) - 1)
	{
		mult = mult * 10;
		i++;
	}
	while (mult > 0)
	{
		result = result + (*str - '0') * mult;
		mult = mult / 10;
		str++;
	}
	if (negative % 2 != 0)
		result = -result;
	return (result);
}
