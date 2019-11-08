/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:36:17 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 15:32:45 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		i;

	i = -1;
	temp = (char *)s;
	while (s[++i])
		if (s[i] == c)
			temp = &((char *)s)[i];
	if (*temp != c)
		temp = NULL;
	if (!c)
		temp = &((char *)s)[i];
	return (temp);
}
