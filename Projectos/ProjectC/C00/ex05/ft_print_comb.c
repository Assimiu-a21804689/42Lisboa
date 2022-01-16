/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:24:22 by amane             #+#    #+#             */
/*   Updated: 2022/01/15 22:29:35 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	int		p1;
	int		s2;
	int		t3;
	void	saida(int, int, int);

	p1 = 0;
	s2 = 0;
	t3 = 0;
	while (p1 <= 7)
	{
		s2 = p1 + 1;
		while (s2 <= 8)
		{
			t3 = s2 +1;
			while (t3 <= 9)
			{
				saida(p1, s2, t3);
				t3 ++;
			}
			s2 ++;
		}
		p1 ++;
	}
}

void	saida(int p1, int s2, int t3)
{
	void	escreve_caracter(char);

	escreve_caracter(p1 +48);
	escreve_caracter(s2 +48);
	escreve_caracter(t3 +48);
	if (p1 != 7 || s2 != 8 || t3 != 9)
	{
		escreve_caracter(',');
		escreve_caracter(' ');
	}
}

void	escreve_caracter(char c)
{
	write (1, &c, 1);
}
