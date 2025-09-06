/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:09:24 by alermi            #+#    #+#             */
/*   Updated: 2025/09/06 19:29:20 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string	lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		//setter functions
		void	setFirstName(const std::string &str);
		void	setLastName(const std::string &str);
		void	setNickName(const std::string &str);
		void	setPhoneNumber(const std::string &str);
		void	setDarkestSecret(const std::string &str);
		
		//getter Functions
		std::string	getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif
