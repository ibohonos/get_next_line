/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:45:24 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/01 18:05:47 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*line;

	argc = 0;
	line = NULL;
	fd = open(argv[1], O_RDONLY);
	ft_putnbr(fd);
	ft_putchar('\n');
	while ((i = get_next_line(fd, &line)) > 0)
	{
		ft_putnbr(fd);
		ft_putchar('\n');
		ft_putnbr(i);
		ft_putchar('\t');
		ft_putendl(line);
	}
	ft_putnbr(i);
	ft_putchar('\n');
	i = argc;
	return (0);
}
