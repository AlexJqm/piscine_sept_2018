/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:40:28 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 20:40:29 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_usage(int x, int y)
{
	write(1, "error : only [ + - * / % ] are accepted.\n", 41);
	return (0);
}
