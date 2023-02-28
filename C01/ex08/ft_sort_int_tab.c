/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:41:55 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/28 23:13:15 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	sorted;
	int	aux;
	int	i;

	sorted = 0;
	while (sorted == 0)
	{
		i = 0;
		while (i < size - 1)
		{
			sorted = 1;
			if (tab[i] > tab[i + 1])
			{
				ft_swap(tab[i], tab[i + 1]);
				sorted = 0;
				i = 0;
			}
			if (sorted == 1)
			{
				i++;
			}
		}
	}
}
