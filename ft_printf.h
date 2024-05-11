/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:29:45 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/11 12:53:51 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_format(va_list args, char fmt);
int		ft_printf(const char *format, ...);
int		ft_print_char(char c);
int		ft_print_str(const char *str);
int		ft_print_num(int n);
size_t	ft_strlen(const char *str);
int		ft_hex(unsigned int nbr, const char format);
int		ft_print_ptr(void *nbr, const char format);
int		ft_print_unsigned(unsigned int n);
#endif
