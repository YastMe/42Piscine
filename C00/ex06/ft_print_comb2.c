/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:08:22 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/08 12:53:25 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_chars(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int a, int b)
{
	char	first;
	char	second;

	if (a <= 9)
	{
		first = a + 48;
		print_chars('0', first);
	}
	else if (a <= b)
	{
		first = (a % 10) + 48;
		second = (a / 10) + 48;
		print_chars(second, first);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putint(a, 98);
			write(1, " ", 1);
			ft_putint(b, 99);
			if (a != 98 || b != 99)
			{
				print_chars(',', ' ');
			}
			b++;
		}
		a++;
	}	
}
