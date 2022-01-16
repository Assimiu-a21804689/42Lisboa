/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:32:56 by amane             #+#    #+#             */
/*   Updated: 2022/01/15 23:29:56 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	void	escreve(char);
	int		r;

	r = n * -1;
	if (n == 0)
	{
		escreve('P');
		escreve('+');
	}
	else if (n < 0)
	{
		escreve('N');
		escreve('-');
	}
	else
	{
		escreve('P');
		escreve('+');
	}
}

void	escreve(char c)
{
	write(1, &c, 1);
}
