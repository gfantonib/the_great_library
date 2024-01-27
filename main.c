/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:42:36 by gfantoni          #+#    #+#             */
/*   Updated: 2024/01/27 15:56:16 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	main(void)
{
	t_bst	*tree1;
	bool	was_inserted;

	tree1 = NULL;
	was_inserted = false;
	int to_insert[] = {8, 3, 10, 1, 6, 14, 4, 7, 13, 29, 5, 32, 18, 9};
	for (int i = 0; i < 9; i++) tree1 = bst_insert(tree1, to_insert[i], &was_inserted);

	ft_putstr_fd("BEGIN\n", 1);
	bst_breadth_first(tree1);
	ft_printf("atoi: %d", ft_atoi("1999"));
}
