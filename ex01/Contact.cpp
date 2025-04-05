/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:57:07 by gahmed            #+#    #+#             */
/*   Updated: 2025/04/04 19:57:47 by gahmed           ###   ########.fr       */
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
void Contact::set_secret(string secret)
{
    this->secret = secret;
}
void Contact::set_number(string number)
{
    this->number = number;
}
string Contact::get_firstname()
{
    return(this->firstname);
}
string Contact::get_lastname()
{
    return(this->lastname);
}
string Contact::get_nickname()
{
    return(this->nickname);
}
string Contact::get_secret()
{
    return(this->secret);
}
string Contact::get_number()
{
    return(this->number);
}