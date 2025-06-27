/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:16:44 by gahmed            #+#    #+#             */
/*   Updated: 2025/06/03 21:44:15 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string>
#include <iostream>

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string secret;
    std::string number;
public:
    void set_firstname(std::string firstname);
    void set_lastname(std::string lastname);
    void set_nickname(std::string nickname);
    void set_secret(std::string secret);
    void set_number(std::string number);
    std::string get_firstname();
    std::string get_lastname();
    std::string get_nickname();
    std::string get_secret();
    std::string get_number();
};

