/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:40:27 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/16 15:44:58 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	int	res;

	res = 1;
	if (c < 32 || c > 127)
	{
		res = 0;
	}
	return (res);
}

void	print_hex(char *c)
{
	int	i;

	i = 1;
	write(1, "\\", 1);
	while (i >= 0)
	{
		if (c[i] == '\0')
		{
			write(1, "0", 1);
		}
		else
		{
			write(1, &c[i], 1);
		}
		i--;
	}
}

void	get_str_hex(char c)
{
	int		d;
	int		m;
	int		i;
	char	hex[2];

	d = c;
	i = 0;
	while (d != 0)
	{
		m = d % 16;
		if (m < 10)
		{
			hex[i] = m + 48;
		}
		else
		{
			hex[i] = m + 87;
		}
		d = d / 16;
		i++;
	}
	print_hex(hex);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (ft_str_is_printable(*str))
		{
			write(1, str, 1);
		}
		else
		{
			get_str_hex(*str);
		}
		str++;
	}	
}
