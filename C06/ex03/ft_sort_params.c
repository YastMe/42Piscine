/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 22:15:41 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/28 23:25:36 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while ((*s1 != '\0' || *s2 != '\0') && result == 0)
	{
		if (*s1 != *s2)
			result = *s1 - *s2;
		s1++;
		s2++;
	}
	return (result);
}

void	ft_swap(char **a, int i)
{
	char	*aux;

	aux = a[i];
	a[i] = a[i + 1];
	a[i + 1] = aux;
}

void	ft_sort_params(char **argv, int len)
{
	int	i;
	int	sorted;

	sorted = 0;
	while (sorted == 0)
	{
		i = 1;
		while (i < len - 1)
		{
			sorted = 1;
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				sorted = 0;
				ft_swap(argv, i);
				i = 1;
			}
			if (sorted == 1)
				i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 1;
	ft_sort_params(argv, argc);
	while (i < argc)
	{
		while (*argv[i] != 0)
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
