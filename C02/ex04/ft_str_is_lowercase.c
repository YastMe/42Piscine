/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:54:15 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/13 11:57:39 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	res;

	res = 1;
	if (*str != '\0')
	{
		while (*str != '\0' && res == 1)
		{
			if (*str < 'a' || *str > 'z')
			{
				res = 0;
			}
			str++;
		}
	}
	return (res);
}
