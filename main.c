/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:42:36 by gfantoni          #+#    #+#             */
/*   Updated: 2024/01/29 10:56:48 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <fcntl.h>


int	main(void)
{
	t_bst	*tree1;
	bool	was_inserted;

	tree1 = NULL;
	was_inserted = false;
	int to_insert[] = {7, 2, 11, 5, 3};
	for (int i = 0; i < 5; i++) tree1 = bst_insert(tree1, to_insert[i], &was_inserted);

	int fd = open("gnl.txt", O_RDONLY);
	char	*line;
	while (line)
	{
		line = get_next_line(fd);
		ft_printf("%s", line);
	}
	ft_printf("\n");

	bst_breadth_first(tree1);
}
