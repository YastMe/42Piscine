/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:55:45 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/13 12:00:10 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	res;

	res = 1;
	if (*str != '\0')
	{
		while (*str != '\0' && res == 1)
		{
			if (*str < 'A' || *str > 'Z')
			{
				res = 0;
			}
			str++;
		}
	}
	return (res);
}
