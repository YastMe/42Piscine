/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:51:17 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/14 17:42:51 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	res;

	res = 1;
	if (*str != '\0')
	{
		while (*str != '\0' && res == 1)
		{
			if (*str < 'A' || *str > 'z' || (*str >= '[' && *str <= '`'))
			{
				res = 0;
			}
			str++;
		}
	}
	return (res);
}
