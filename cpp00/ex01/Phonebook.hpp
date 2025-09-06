/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:11:08 by alermi            #+#    #+#             */
/*   Updated: 2025/09/06 16:28:10 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		
		Contact		contacts[8];
		int			numContacts;

		std::string formatField(const std::string &str) const;
	public:
		Phonebook();

		void	addContact(const Contact &newContact);
		void	displayContacts() const;
		void	displayContactDetails(int index) const;
		int		getNumContacts() const;
};

#endif
