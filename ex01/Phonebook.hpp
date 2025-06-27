/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:56:45 by gahmed            #+#    #+#             */
/*   Updated: 2025/06/03 21:12:50 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

class Phonebook {
	private:
		Contact contacts[8];
		int size;
		int index;
	public:
		Phonebook() : size(0), index(0) {}
		int get_size();
		void add_contact(std::string data[5]);
		void display_details(int i);
		void display_phonebook();
		bool is_empty(std::string data[5]);
};