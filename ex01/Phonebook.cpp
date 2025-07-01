/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:14:28 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/01 13:54:09 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	print_name(std::string str)
{
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::right << std::setw(10) << str;
}

int Phonebook::get_size()
{
	return (this->size);
}

bool Phonebook::is_empty(std::string data[5])
{
	if (data[0].empty() || data[1].empty() || data[2].empty() ||
		data[3].empty() || data[4].empty())
	{
		std::cout << "Error: Contact cannot be empty." << std::endl;
		return (true);
	}
	return (false);
}

void Phonebook::add_contact(std::string data[5])
{
	int index;

	index = this->index;
	if(is_empty(data))
		return;
	this->contacts[index].set_firstname(data[0]);
	this->contacts[index].set_lastname(data[1]);
	this->contacts[index].set_nickname(data[2]);
	this->contacts[index].set_number(data[3]);
	this->contacts[index].set_secret(data[4]);
	if(this->size < 8)
		this->size++;
	this->index = (this->index + 1) % 8;
}

void Phonebook::display_details(int i)
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
		
		std::cout << std::right << std::setw(10) << i << " | ";
		print_name(this->contacts[i].get_firstname());
		std::cout << " | "; 
		print_name(this->contacts[i].get_lastname());
		std::cout <<  " | ";
		print_name(this->contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
}

