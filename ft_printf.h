/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:06:31 by nbarreir          #+#    #+#             */
/*   Updated: 2021/04/09 20:47:57 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>

/*
**  Struct Part
*/
typedef struct s_flags
{
	char	type;
	char	zero;
	char	minus;
	char	padding;
	int		width;
	int		precision;
	int		number;
	int		precision_val;
	int		count;
	int		len;
	char	dot;
}				t_flags;

/*
** Prinft functions
*/

int			ft_printf(const char *input, ...);
void		reset_type(t_flags *flags);
void		get_flags(const char *str, t_flags *flags, va_list args);
void		get_flags_a(const char *str, t_flags *flags, va_list args);
void		paula_is_star(t_flags *flags, va_list args, int *star);
int			is_number(const char *str, t_flags *flags);

void		print_percent(t_flags *flags);
void		print_choi(t_flags *flags, int c);
void		print_padd(t_flags *flags, int len);
void		print_s(t_flags *flags, char *s);

/*
**  Utils functions
*/

void		ft_putchar(t_flags *flags, char c);
char		*ft_strdup(const char *s1);
int			ft_isdigit(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		ft_putstr(t_flags *flags, char *s, size_t size);
size_t		ft_strlen(const char *s);

#endif
