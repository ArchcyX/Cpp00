/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:09:18 by alermi            #+#    #+#             */
/*   Updated: 2025/09/06 19:29:07 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(const std::string &str)
{
	this->firstName = str;
}

void	Contact::setLastName(const std::string &str)
{
	this->lastName = str;
}

void	Contact::setNickName(const std::string &str)
{
	this->nickName = str;
}

void	Contact::setPhoneNumber(const std::string &str)
{
	this->phoneNumber = str;
}

void	Contact::setDarkestSecret(const std::string &str)
{
	this->darkestSecret = str;
}

std::string Contact::getFirstName() const
{
	return (this->firstName);
}

std::string Contact::getLastName() const
{
	return (this->lastName);
}

std::string Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}

std::string Contact::getNickName() const
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}


