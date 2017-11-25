/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:45:24 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/25 19:54:26 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*line;

	argc = 0;
	fd = open(argv[1], O_RDONLY);
	i = get_next_line(fd, &line);
	return (0);
}
