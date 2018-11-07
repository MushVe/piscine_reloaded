/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:03:39 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/06 14:37:47 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || !nb || nb > 13)
		return (0);
	fac = 1;
	while (0 < nb)
		fac = fac * nb--;
	return (fac);
}
