#include "Phonebook.hpp"

static int is_valid_number(string number)
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
    string data[5];
    string input;
    int i = 0;
    cout << "Welcome to the Phonebook!" << endl;
    cout << "You can add a contact by typing 'ADD'" << endl;
    cout << "You can search for a contact by typing 'SEARCH'" << endl;
    cout << "You can exit the program by typing 'EXIT'" << endl;
    while (1)
    {
        cout << "Enter command: ";
        getline(cin, input);
        if (input == "ADD")
        {
            if (phonebook.get_size() >= 8)
            {
                cout << "Phonebook is full!" << endl;
                continue;
            }
            cout << "Enter first name: ";
            getline(cin, data[0]);
            cout << "Enter last name: ";
            getline(cin, data[1]);
            cout << "Enter nickname: ";
            getline(cin, data[2]);
            cout << "Enter phone number: ";
            getline(cin, data[3]);
            if (!is_valid_number(data[3]))
            {
                cout << "Invalid phone number!" << endl;
                continue;
            }
            cout << "Enter darkest secret: ";
            getline(cin, data[4]);
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
            cout << "Invalid command!" << endl;
        }
    }
    cout << "Goodbye!" << endl; 
}