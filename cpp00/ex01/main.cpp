/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:00:12 by alermi            #+#    #+#             */
/*   Updated: 2025/09/06 19:51:54 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>

int controller(const std::string &input, const std::string &type)
{
    if (input.length() != type.length())
        return (0);

    for (size_t i = 0; i < input.length(); i++)
    {
        if (std::tolower(input[i]) != std::tolower(type[i]))
            return (0);
    }
    return (1);
}

Contact createContact()
{
	Contact newContact;
	std::string input;

	std::cout << "Enter First Name: ";
	std::cin >> newContact.setFirstName();
	newContact.setFirstName(input);
	std::cout << "Enter Last Name: ";
	std::cin >> input;
	newContact.setLastName(input);
	std::cout << "Enter Nickname: ";
	std::cin >> input;
	newContact.setNickName(input);
	std::cout << "Enter Phone Number: ";
	std::cin >> input;
	newContact.setPhoneNumber(input);
	std::cout << "Enter Darkest Secret: ";
	std::cin >> input;
	newContact.setDarkestSecret(input);
	return (newContact);
}

int	main(void)
{
	Phonebook	phonebook;
	Contact		contact;
	std::string	input;

	std::cout << "Welcome to the Phonebook App" << std::endl;
	std::cout << "PLEASE SELECT AND OPTION" << std::endl << "-----------------------------" << std::endl;
	std::cout << "-> (ADD) : To add a new contact" << std::endl;
	std::cout << "-> (SEARCH) : To search for a contact" << std::endl;
	std::cout << "-> (EXIT) : To exit the application" << std::endl << "-----------------------------" << std::endl;

	while (1)
	{
		std::cin >> input;
		if (controller(input, "ADD"))
		{
			phonebook.addContact(createContact());
			phonebook.displayContacts();
		}
		else if (controller(input, "SEARCH"))
		{

		}
		else if (controller(input, "EXIT"))
		{
			std::cout << "Exiting the Phonebook App. Thank for using" << std::endl;
			break ;
		}
		else {
			std::cout << "Invalid option. Please try again." << std::endl << std::endl;
		}

	}
	return (0);
}
