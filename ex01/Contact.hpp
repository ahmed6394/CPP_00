/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:57:01 by gahmed            #+#    #+#             */
/*   Updated: 2025/04/02 18:57:02 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
using namespace std;

class Contact
{
private:
    string firstname;
    string lastname;
    string nickname;
    string secrate;
    string number;
public:
    void set_firstname(string firstname);
    void set_lastname(string lastname);
    void set_nickname(string nickname);
    void set_secrate(string secrate);
    void set_number(string number);
    string get_firstname();
    string get_lastname();
    string get_nickname();
    string get_secrate();
    string get_number();

};

