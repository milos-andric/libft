/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 13:44:28 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 16:00:25 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	while (*alst)
		*alst = *alst->next
	*alst = new

	while (*alst->next)
		*alst = *alt->next
	*alst->next 

	if (alst && new)
	{
		if (!*alst)
			*alst = new;
		else
		{
			(ft_lstlast(*alst))->next = new;
			new->next = NULL;
		}
	}
}
