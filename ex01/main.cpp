/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:17:28 by gahmed            #+#    #+#             */
/*   Updated: 2025/06/01 23:17:33 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static int is_valid_number(std::string number)
{
    int i = 0;
    while(number[i])
    {
        if(number[i] == ' ' || number[i] == '\t')
        {
            i++;
            continue;
        }
        if (number[i] < '0' || number[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    Phonebook phonebook;
    std::string data[5];
    std::string input;
    int i = 0;
    std::cout << "Welcome to the Phonebook!" << std::endl;
    std::cout << "You can add a contact by typing 'ADD'" << std::endl;
    std::cout << "You can search for a contact by typing 'SEARCH'" << std::endl;
    std::cout << "You can exit the program by typing 'EXIT'" << std::endl;
    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (phonebook.get_size() >= 8)
            {
                std::cout << "Phonebook is full!" << std::endl;
                continue;
            }
            std::cout << "Enter first name: ";
            std::getline(std::cin, data[0]);
            std::cout << "Enter last name: ";
            std::getline(std::cin, data[1]);
            std::cout << "Enter nickname: ";
            std::getline(std::cin, data[2]);
            std::cout << "Enter phone number: ";
            std::getline(std::cin, data[3]);
            if (!is_valid_number(data[3]))
            {
                std::cout << "Invalid phone number!" << std::endl;
                continue;
            }
            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, data[4]);
            phonebook.add_contact(data);
        }
        else if (input == "SEARCH")
        {
            phonebook.display_phonebook();
        }
        else if (input == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Invalid command!" << std::endl;
        }
    }
    std::cout << "Goodbye!" << std::endl; 
}