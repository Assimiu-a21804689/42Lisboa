/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:12:35 by amane             #+#    #+#             */
/*   Updated: 2022/01/14 13:23:38 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	f_putchar(char c)
{
	write(1, &c, 1);
}
