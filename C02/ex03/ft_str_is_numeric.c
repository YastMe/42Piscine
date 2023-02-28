/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:43:33 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/13 11:45:20 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 1;
	if (*str != '\0')
	{
		while (*str != '\0' && res == 1)
		{
			if (*str < '0' || *str > '9')
			{
				res = 0;
			}
			str++;
		}
	}
	return (res);
}
