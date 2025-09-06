/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:11:28 by alermi            #+#    #+#             */
/*   Updated: 2025/09/06 18:35:26 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Phonebook::Phonebook() : numContacts(0) {}

void Phonebook::addContact(const Contact &newContact)
{
    if (numContacts < 8)
    {
        contacts[numContacts] = newContact;
        numContacts++;
    }
    else
    {
        std::cout << "Phonebook is full. Oldest contact will be replaced: "
                  << contacts[0].getFirstName() << std::endl;

        for (int i = 1; i < 8; i++)
            contacts[i - 1] = contacts[i];

        contacts[7] = newContact;
    }
}

std::string Phonebook::formatField(const std::string &str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Phonebook::displayContacts() const
{
    if (numContacts == 0)
    {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }

    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|"
              << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < numContacts; i++)
    {
        std::cout << "|"
                  << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickName()) << "|"
                  << std::endl;
    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}


