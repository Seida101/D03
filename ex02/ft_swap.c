/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samaeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:38:46 by samaeza           #+#    #+#             */
/*   Updated: 2020/07/16 13:18:22 by samaeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
  int tls;

  tls = *a;
  *a = *b;
  *b = tls;
}
