/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 21:02:23 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/15 21:02:41 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display(char *argv)
{
	int		i;
	int		fd;
	char	buf[30];

	if (argv == 0)
		fd = 0;
	if (argv != 0)
		fd = open(argv, O_RDONLY);
	while ((i = read(fd, buf, 30)) != 0)
		write(1, buf, i);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
		ft_display(argv[1]);
	return (0);
}
