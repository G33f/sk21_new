/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_it.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:16:38 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/04 19:22:04 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while(*tab)
	{
		if(f(tab) == 1)
			i++;
		tab++;
	}
	return(i);
}
