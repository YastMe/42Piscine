/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:01:43 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/21 15:56:36 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char str)
{
	int	res;

	res = 1;
	if (str != '\0')
	{
		while (str != '\0' && res == 1)
		{
			if (str < 'A' || str > 'z' || (str >= '[' && str <= '`'))
				res = 0;
			str++;
		}
	}
	return (res);
}

int	ft_str_is_numeric(char str)
{
	int	res;

	res = 1;
	if (str != '\0')
	{
		while (str != '\0' && res == 1)
		{
			if (str < '0' || str > '9')
				res = 0;
			str++;
		}
	}
	return (res);
}

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (start);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*start;

	i = 0;
	start = str;
	str = ft_strlowcase(str);
	while (*str != '\0')
	{
		if (i == 0)
		{
			if (*str >= 'a' || *str <= 'z')
				*str = *str - 32;
		}
		else if (!ft_str_is_alpha(str[i - 1]) && !ft_str_is_numeric(str[i - 1]))
		{
			if (*str >= 'a' || *str <= 'z')
				*str = *str - 32;
		}
		i++;
		str++;
	}
	return (start);
}
