/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 05:42:25 by kpeng             #+#    #+#             */
/*   Updated: 2018/08/29 05:42:27 by kpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = -1;
	while (tab[++i] != 0)
		if ((*f)(tab[i]) == 1)
			return (1);
	return (0);
}