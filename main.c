/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:10:58 by nbarreir          #+#    #+#             */
/*   Updated: 2021/04/08 02:17:20 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char a;

	a = 'b';
	printf("hello1\n");
	ft_printf("hello2\n");

	printf("|%-5c|", a);
	printf("\n");
	ft_printf("|%c|", a);
}
