/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:57:44 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/13 13:10:07 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

char	*ft_upper(char * str)
{
	int i;

	i = 0;
	while(str && str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return(str);
}

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while(argv[i])
		{
			std::cout << ft_upper(argv[i]);
			i++;
		}
		std::cout << "\n";
	}
	return(0);
}
