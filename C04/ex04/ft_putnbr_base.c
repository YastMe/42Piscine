/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:16:29 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/27 16:22:46 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (*base == 0)
		return (0);
	while (base[i] != 0)
	{
		j = i + 1;
		while (base[j] != 0)
		{	
			if (base[i] == '-' || base[i] == '+' || base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_print_base(int nbr, char *base, int len)
{
	char	c;

	if (nbr != 0)
	{
		ft_print_base(nbr / len, base, len);
		c = base[nbr % len];
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	if (ft_check_errors(base))
	{
		baselen = ft_strlen(base);
		ft_print_base(nbr, base, baselen);
	}
}
