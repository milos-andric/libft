/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:59:55 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 12:29:18 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i])
	{
		while (((str[i] >= '\t') && (str[i] <= '\r')) || (str[i] == ' '))
			i++;
		if ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while ((str[i] >= '0') && (str[i] <= '9'))
		{
			res = (res * 10) + (str[i] - '0');
			i++;
		}
		return (res * sign);
	}
	return (res * sign);
}
