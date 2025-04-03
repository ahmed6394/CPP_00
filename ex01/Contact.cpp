/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:57:07 by gahmed            #+#    #+#             */
/*   Updated: 2025/04/02 18:57:08 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_firstname(string firstname)
{
    this->firstname = firstname;
}
void Contact::set_lastname(string lastname)
{
    this->lastname = lastname;
}
void Contact::set_nickname(string nickname)
{
    this->nickname = nickname;
}
void Contact::set_secrate(string secrate)
{
    this->secrate = secrate;
}
void Contact::set_number(string number)
{
    this->number = number;
}