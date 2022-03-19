/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:53:32 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/19 13:19:00 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include "book.hpp"

void	ft_leaks(void)
{
	system("leaks Contacts");
}

int main(void)
{
	atexit(ft_leaks);
	std::string input;
	book mybook;
	while(1)
	{
		std::cout << "Inserte orden\n";
		std::getline(std::cin, input);
		if(!input.compare("EXIT"))
			break;
		else if(!input.compare("SEARCH"))
			mybook.search();
		else if(!input.compare("ADD"))
			mybook.add();
		else
			std::cout << "Invalid parmeter\n";
	}
	std::cout << "Exit\n";
	return(0);
}
