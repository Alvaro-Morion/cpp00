/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:57:34 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/19 12:50:03 by amorion-         ###   ########.fr       */
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

	void	ft_print_table(int index);
	void	ft_print_complete(void);

};
#endif
