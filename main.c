/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:42:36 by gfantoni          #+#    #+#             */
/*   Updated: 2024/01/29 10:38:42 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	main(void)
{
	t_bst	*tree1;
	bool	was_inserted;

	tree1 = NULL;
	was_inserted = false;
	int to_insert[] = {7, 2, 11, 5, 3};
	for (int i = 0; i < 5; i++) tree1 = bst_insert(tree1, to_insert[i], &was_inserted);
	bst_simple_print(tree1, 5);
}
