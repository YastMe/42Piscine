/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:59:29 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/17 16:36:58 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_spaces(char *input)
{
	int	works;
	int	i;

	works = 1;
	i = 0;
	while (i < 32)
	{
		if (i % 2 == 1 && input[i] != ' ')
		{
			works = 0;
		}
		i++;
	}
	return (works);
}

int	ft_wrong_input(char *input)
{
	int	i;
	int	works;

	i = 0;
	works = 1;
	while (i < 16 && works == 1)
	{
		if (input[i] < '1' || input[i] > '4')
		{
			works = 0;
		}
		i++;
	}
	if (i != 16)
	{
		works = 0;
	}
	return (works);
}
