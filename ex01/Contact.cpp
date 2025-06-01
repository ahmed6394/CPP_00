/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:57:07 by gahmed            #+#    #+#             */
/*   Updated: 2025/06/01 23:19:01 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_firstname(std::string firstname)
{
    this->firstname = firstname;
}
void Contact::set_lastname(std::string lastname)
{
    this->lastname = lastname;
}
void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}
void Contact::set_secret(std::string secret)
{
    this->secret = secret;
}
void Contact::set_number(std::string number)
{
    this->number = number;
}
std::string Contact::get_firstname()
{
    return(this->firstname);
}
std::string Contact::get_lastname()
{
    return(this->lastname);
}
std::string Contact::get_nickname()
{
    return(this->nickname);
}
std::string Contact::get_secret()
{
    return(this->secret);
}
std::string Contact::get_number()
{
    return(this->number);
}