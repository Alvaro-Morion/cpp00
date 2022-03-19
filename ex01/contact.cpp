/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:03:43 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/19 13:34:19 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<iomanip>
#include "contact.hpp"

contact::contact(void)
{}
contact::~contact(void)
{
	return;
}

void	ft_truncate(std::string field);

void	contact::ft_print_table(int index)
{
	std::cout << "|";
	std::cout << std::setw(10);
	std::setfill(' ');
	std::cout << index << "|";
    ft_truncate(this->nombre);
	ft_truncate(this->apellido);
	ft_truncate(this->apodo);
	std::cout << std::endl;
	return;
}

void	contact::ft_print_complete(void)
{
	std::cout << "Nombre:\t" << this->nombre << "\n";
	std::cout << "Apellido:\t" << this->apellido << "\n";
	std::cout << "Apodo:\t" << this->apodo << "\n"; 
	std::cout << "Teléfono:\t" << this->telefono << "\n";
	std::cout << "Secreto más oscuro:\t" << this->secreto << "\n";
	return;
}

void	ft_truncate(std::string field)
{
	size_t	i;
	char	out[11];
	
	i = field.copy(out, 10, 0);
	if (i == 10)
		out[9] = '.';
	out[10] = 0;
    std::cout << std::setw(10);
    std::setfill(' ');
	std::cout << out << '|';
}
