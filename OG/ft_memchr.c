/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:10:15 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 11:17:48 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char car;
	unsigned char *s1;

	s1 = (unsigned char *)s;
	car = (unsigned char)c;
	while (((*s1 != car)) && --n)
		s1++;
	return ((*s1 != car) ? NULL : (char *)s1);
}
