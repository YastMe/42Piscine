/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:07:40 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/17 16:53:18 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_onlyone(char *array)
{
	int	i;
	int	count;
	int	works;

	count = 0;
	i = 0;
	works = 1;
	while (i < 4)
	{
		if (array[i] == '1')
			count++;
		i++;
	}
	if (count != 1)
		works = 0;
	count = 0;
	while (i < 7 && works == 1)
	{
		if (array[i] == '1')
			count++;
		i++;
	}
	if (count != 1)
		works = 0;
	return (works);
}
