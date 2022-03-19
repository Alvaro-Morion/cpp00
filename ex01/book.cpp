/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:25:43 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/19 13:27:43 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "book.hpp"
#include "contact.hpp"

book::book(void)
{
	this->used = 0;
}

book::~book(void)
{
	return;
}
void	book::add(void)
{
	int used = this->used;
	int i;

	if(used <= 7)
	{
		std::cout << "Introduzca nombre\n";
		std::getline(std::cin, this->contact[used].nombre);
		std::cout << "Introduzca apellido\n";
		std::getline(std::cin, this->contact[used].apellido);
		std::cout << "introduzca apodo\n";
		std::getline(std::cin, this->contact[used].apodo);
		std::cout << "Introduzca teléfono\n";
		std::getline(std::cin, this->contact[used].telefono);
		std::cout << "introduzca secrreto más oscuro\n";
		std::getline(std::cin, this->contact[used].secreto);
		this->used++;
	}
	else
	{
		i = 1;
		this->contact[0].~contact();
		while(i < 8)
		{
			this->contact[i-1] = this->contact[i];
			i++;
		}
		this->used = 7;
		book::add();
	}
	return;
}

void	book::search(void)
{
	int i;
	std::string index;

	i = 0;
	if(this->used  == 0)
	{
		std::cout << "The book is empty\n";
		return;
	}
	while (i < used && used)
	{
		this->contact[i].ft_print_table(i + 1);
		i++;
	}
	while(!index[0])
	{	
		std::cout << "introduzca indice o 0 para volver\n";
		std::getline(std::cin, index);
		if(index.size() != 1 || index[0] > this->used + '0' || index[0] < '0')
		{	
			std::cout << "invalid index\n";
			index = '\0';
		}
	}
	if (index[0] == '0')
		return;
	this->contact[index[0] - '0' - 1].ft_print_complete();
}
