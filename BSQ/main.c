/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:07:51 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/28 11:37:20 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_frame(void)
{
	write(1, "               ___", 18);
	write(1, "\n", 1);
	write(1, "              /___\\    ", 22);
	write(1, "\n", 1);
	write(1, "          .-.|=0-0=|.-.  ", 25);
	write(1, "\n", 1);
	write(1, "     (\\_.'.-\\ \\_o_/`/-.'._/)", 28);
	write(1, "\n", 1);
	write(1, " ~` - ~`-^_`~ -_~ ^- ~_` -~ _", 29);
	write(1, "\n", 1);
	write(1, "    -  ~  -  ^   - ~ -  ~  -", 28);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
}

void	ft_second_frame(void)
{
	write(1, "            ___", 15);
	write(1, "\n", 1);
	write(1, "          /`  _\\", 16);
	write(1, "\n", 1);
	write(1, "          |  / 0|--.", 20);
	write(1, "\n", 1);
	write(1, "     -   / \\_|0`/ /.`'._/)", 26);
	write(1, "\n", 1);
	write(1, " - ~ -^_| /-_~ ^- ~_` - -~ _", 28);
	write(1, "\n", 1);
	write(1, " -  ~  -| |   - ~ -  ~  -", 25);
	write(1, "\n", 1);
	write(1, "        \\ \\, ~   -   ~", 22);
	write(1, "\n", 1);
	write(1, "         \\_|", 12);
	write(1, "\n", 1);
}

void	ft_third_frame(void)
{
	write(1, "        :::      ::::::::", 25);
	write(1, "\n", 1);
	write(1, "      :+:      :+:    :+:", 25);
	write(1, "\n", 1);
	write(1, "    +:+ +:+         +:+  ", 25);
	write(1, "\n", 1);
	write(1, "  +#+  +:+       +#+     ", 25);
	write(1, "\n", 1);
	write(1, "+#+#+#+#+#+   +#+        ", 25);
	write(1, "\n", 1);
	write(1, "     #+#    #+#          ", 25);
	write(1, "\n", 1);
	write(1, "    ###   ########  malaga    ", 30);
	write(1, "\n", 1);
	write(1, "Lo sentimos por hacerte perder el tiempo.\n", 42);
	write(1, "Este mes ha sido una gran experiencia. ", 39);
	write(1, "Nos vemos en el cursus. o7\n", 27);
}

void	ft_clear(void)
{
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
}

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 5)
	{
		ft_clear();
		ft_first_frame();
		j = 0;
		while (j < 400000000)
			j++;
		ft_clear();
		ft_second_frame();
		j = 0;
		while (j < 400000000)
			j++;
		i++;
	}
	ft_clear();
	ft_third_frame();
	return (0);
}
