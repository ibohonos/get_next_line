/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:45:24 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/26 19:14:59 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	// int		i;
	int		fd;
	char	*line;

	argc = 0;
	line = NULL;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) != 0)
	{
		if (get_next_line(fd, &line) == -1)
			return (0);
		ft_putendl(line);
	}
	ft_putchar('\n');
	return (0);
}
