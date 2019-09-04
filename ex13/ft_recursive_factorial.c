/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:54:40 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/04 12:54:43 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursiv_factorial(int nb)
{
	int r;

	r = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb != 0)
	{
		r = nb * ft_recursiv_factorial(nb - 1);
	}
	return (r);
}

