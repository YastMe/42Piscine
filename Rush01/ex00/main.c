/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:18:03 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/17 16:54:54 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_check_restrictions(char *couple);
int	ft_wrong_input(char *couple);
int	ft_spaces(char *input);

char	*ft_get_input(char	*args)
{
	int		i;
	int		j;
	char	*input;

	i = 0;
	j = 0;
	input = (char *) malloc(17);
	while (i < 32)
	{
		if (i % 2 == 0)
		{
			input[j] = args[i];
			j++;
		}
		i++;
	}	
	input[16] = '\0';
	return (input);
}

void	ft_divide_input(char *input, char *rows, char *cols)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		rows[i] = input[i];
		i++;
	}
	rows[8] = '\0';
	while (i < 16)
	{
		cols[i - 8] = input[i];
		i++;
	}
	cols[8] = '\0';
}

int	main(int argsc, char **argsv)
{
	char	*input;
	char	*rows;
	char	*cols;

	rows = (char *) malloc(8);
	cols = (char *) malloc(8);
	input = ft_get_input(argsv[argsc - 1]);
	ft_divide_input(input, rows, cols);
	if (ft_wrong_input(input) == 0 || ft_spaces(argsv[argsc - 1]))
		write(1, "Error\n", 6);
	else if (ft_check_restrictions(rows) == 0)
		write(1, "Error\n", 6);
	else if (ft_check_restrictions(cols) == 0)
		write(1, "Error\n", 6);
	else
		write(1, "Entrada válida con solución.\n", 32);
}
