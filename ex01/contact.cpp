/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:03:43 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/15 13:22:09 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

contact::contact(void)
{
	std::cout << "contacct constructed\n";
}
contact::~contact(void)
{
	std::cout << "contact destroyed\n";
	return;
}
