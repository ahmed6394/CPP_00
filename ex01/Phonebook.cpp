/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:56:57 by gahmed            #+#    #+#             */
/*   Updated: 2025/04/05 20:11:23 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


int Phonebook::get_size()
{
	return (this->size);
}

void Phonebook::add_contact(string data[5])
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
	cout << "First Name: " << this->contacts[i].get_firstname() << endl;
	cout << "last Name: " << this->contacts[i].get_lastname() << endl;
	cout << "Nick Name: " << this->contacts[i].get_nickname() << endl;
	cout << "Number: " << this->contacts[i].get_number() << endl;
	cout << "Secret: " << this->contacts[i].get_secret() << endl;
}

void Phonebook::display_phonebook()
{
	int i = 0;

	while (i < this->size)
	{
		cout << i << ". " << endl;
		cout << "First Name: ";
		print_name(this->contacts[i].get_firstname());
		cout << endl;
		cout << "Last Name: ";
		print_name(this->contacts[i].get_lastname());
		cout << endl;
		cout << "Nick Name: ";
		print_name(this->contacts[i].get_nickname());
		cout << endl;
		i++;
	}
}
void	print_name(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		cout << str.substr(0, 9);
		cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			cout << " ";
		cout << str;
	}
}
