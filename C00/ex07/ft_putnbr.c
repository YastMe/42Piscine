/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:12:27 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/12 19:10:18 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_chars(char n)
{
	write(1, &n, 1);
}

void	print_nbr(int nb)
{
	int	resto;

	if (nb != 0)
	{
		print_nbr(nb / 10);
		resto = nb % 10;
		if (resto < 0)
		{
			resto = -resto;
		}
		print_chars(resto + 48);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		print_chars('-');
	}
	else if (nb == 0)
	{
		print_chars(nb);
	}
	print_nbr(nb);
}

int	main(void)
{
	ft_putnbr(-6845318);
}
