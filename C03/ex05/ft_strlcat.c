/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:40:23 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/28 20:25:21 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (i < size - dlen - 1 && src[i] != 0)
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[i + size] = 0;
	return (dlen + slen);
}
