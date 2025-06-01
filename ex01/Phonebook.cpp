/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:14:28 by gahmed            #+#    #+#             */
/*   Updated: 2025/06/01 23:17:05 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


int Phonebook::get_size()
{
	return (this->size);
}

void Phonebook::add_contact(std::string data[5])
{
	int index;

	index = this->index;
	this->contacts[index].set_firstname(data[0]);
	this->contacts[index].set_lastname(data[1]);
	this->contacts[index].set_nickname(data[2]);
	this->contacts[index].set_number(data[3]);
	this->contacts[index].set_secret(data[4]);
	if(this->size < 8)
		this->size++;
}

void Phonebook::display_contact(int i)
{
	std::cout << "First Name: " << this->contacts[i].get_firstname() << std::endl;
	std::cout << "last Name: " << this->contacts[i].get_lastname() << std::endl;
	std::cout << "Nick Name: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Number: " << this->contacts[i].get_number() << std::endl;
	std::cout << "Secret: " << this->contacts[i].get_secret() << std::endl;
}

void Phonebook::display_phonebook()
{
	int i = 0;

	while (i < this->size)
	{
		std::cout << i << ". " << std::endl;
		std::cout << "First Name: ";
		print_name(this->contacts[i].get_firstname());
		std::cout << std::endl;
		std::cout << "Last Name: ";
		print_name(this->contacts[i].get_lastname());
		std::cout << std::endl;
		std::cout << "Nick Name: ";
		print_name(this->contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
}
void	print_name(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
}
