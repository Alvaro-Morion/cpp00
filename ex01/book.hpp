/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:47:52 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/19 12:50:12 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#ifndef BOOK_HPP
# define BOOK_HPP

class	book{
public:
	book(void);
	~book(void);

	contact contact[8];
	int used;

	void	search(void);
	void	add(void);
};
#endif
