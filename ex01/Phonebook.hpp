/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:56:45 by gahmed            #+#    #+#             */
/*   Updated: 2025/04/04 19:56:56 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Phonebook {
	private:
		Contact contacts[8];
		int size;
		int index;
	public:
		Phonebook() : size(0), index(0) {}
		int get_size();
		void add_contact(string data[5]);
		void display_contact(int i);
		void display_phonebook();
};