/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:45:24 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/30 17:30:25 by ibohonos         ###   ########.fr       */
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
	while ((i = get_next_line(fd, &line)) > 0)
	{
		ft_putnbr(i);
		ft_putchar('\t');
		ft_putendl(line);
	}
	return (0);
}
