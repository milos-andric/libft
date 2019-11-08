/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:51:26 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 11:59:56 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_size;

	j = 0;
	i = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (i <= size)
	{
		while (src[j] && ((i + j) < (size - 1)))
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
		return (i + src_size);
	}
	else
		return ((size_t)(src_size) + size);
}
