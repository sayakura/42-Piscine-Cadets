/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 00:44:41 by qpeng             #+#    #+#             */
/*   Updated: 2018/09/14 00:50:39 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	unsigned int num;

	num = 2;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	while (num <= n)
	{
		if (num == n)
			return (1);
		num *= 2;
	}
	return (0);
}
