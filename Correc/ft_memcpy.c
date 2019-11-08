/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 17:15:50 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 14:47:47 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dst;

	i = 0;
	if (!dst && !src)
		return (NULL);
	ptr_dst = (char *)dst;
	while (i < n)
	{
		ptr_dst[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
