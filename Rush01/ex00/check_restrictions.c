/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_restrictions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:08:46 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/17 16:53:47 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_onlyone(char *array);

int	ft_restrictions1(char j)
{
	int	works;

	works = 1;
	if (j == '1')
	{
		works = 0;
	}
	return (works);
}

int	ft_restrictions2(char j)
{
	int	works;

	works = 1;
	if (j == '4')
	{
		works = 0;
	}
	return (works);
}

int	ft_restrictions3(char j)
{
	int	works;

	works = 1;
	if (j == '4' || j == '3')
	{
		works = 0;
	}
	return (works);
}

int	ft_restrictions4(char j)
{
	int	works;

	works = 1;
	if (j != '1')
	{
		works = 0;
	}
	return (works);
}

int	ft_check_restrictions(char *couple)
{
	int	i;
	int	works;

	i = 0;
	works = 1;
	if (ft_onlyone(couple) == 1)
	{
		while (i < 4 && works == 1)
		{
			if (couple[i] == '1' && works == 1)
				works = ft_restrictions1(couple[i + 4]);
			if (couple[i] == '2' && works == 1)
				works = ft_restrictions2(couple[i + 4]);
			if (couple[i] == '3' && works == 1)
				works = ft_restrictions3(couple[i + 4]);
			if (couple[i] == '4' && works == 1)
				works = ft_restrictions4(couple[i + 4]);
			i++;
		}
	}
	else
		works = 0;
	return (works);
}
