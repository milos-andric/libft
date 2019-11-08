/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/05 16:47:52 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 17:22:27 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst)
	{
		while (*lst != ft_lstlast(*lst))
		{
			del(ft_lstlast(*lst)->content);
			free(ft_lstlast(*lst));
		}
		*lst = NULL;
	}
}
