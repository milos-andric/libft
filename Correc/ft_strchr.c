/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:10:15 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 12:11:04 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	if (!c)
		return (&((char *)s)[i]);
	if (s[i] == '\0')
		return (NULL);
	return (&((char *)s)[i]);
}