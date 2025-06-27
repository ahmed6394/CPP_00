/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:17:28 by gahmed            #+#    #+#             */
/*   Updated: 2025/06/03 21:21:16 by gahmed           ###   ########.fr       */
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
    std::cout << "Enter Command (ADD, SEARCH, EXIT)" << std::endl;
    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        if (input == "ADD")
        {
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
            std::string index_input;
            int index;
            if (phonebook.get_size() == 0)
            {
                std::cout << "Phonebook is empty!" << std::endl;
                continue;
            }
            std::cout << "Insert the index: ";
            std::getline(std::cin, index_input);
            try {
                index = std::stoi(index_input);
            } catch (...) {
                std::cout << "Invalid input!" << std::endl;
                continue;
            }

            if (index < 0 || index >= phonebook.get_size())
            {
                std::cout << "Invalid index!" << std::endl;
                continue;
            }

            phonebook.display_details(index);
        }
        else if (input == "EXIT")
            break;
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return (0);
}
