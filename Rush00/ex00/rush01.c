/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:00:39 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/09 13:52:40 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_upper_border(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('/');
		}
		else if (i == x - 1)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}	
		i++;
	}
	ft_putchar('\n');
}

void	draw_lower_border(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('\\');
		}
		else if (i == x - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}	
		i++;
	}
	ft_putchar('\n');
}

void	draw_body(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y > 0 && x > 0)
	{
		draw_upper_border(x);
		if (y > 1)
		{
			while (i < y - 2)
			{
				draw_body(x);
				i++;
			}
			draw_lower_border(x);
		}
	}
}
