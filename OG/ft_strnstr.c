/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:10:08 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 16:10:19 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = NULL;
	while ((haystack[i]) && (i < len))
	{
		if (haystack[i] == needle[j])
		{
			while ((needle[j] == haystack[i + j]) && ((i + j) < len))
			{
				if (needle[j + 1] == '\0')
				{
					return ((char *)(&haystack[i]));
				}
				j++;
			}
			j = 0;
			i++;
		}
		i++;
	}
	return (needle[0] == '\0' ? (char *)(&haystack[0]) : ptr);
}
