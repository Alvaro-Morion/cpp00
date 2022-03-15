/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:57:34 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/15 13:22:29 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
class	contact
{
public:
	contact(void);
	~contact(void);
	
	std::string nombre;
	std::string apellido;
	std::string apodo;
	std::string telefono;
	std::string secreto;
	int index;

};
#endif
