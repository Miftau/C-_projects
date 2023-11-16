#include <iostream>
#include <vector>
#include <string>

struct Contact {
    std::string name;
    std::string phoneNumber;
    std::string emailAddress;
};

int main() {
    std::vector<Contact> contacts;
    char choice;

    do {
        Contact newContact;
        std::cout << "Enter name: ";
        std::cin >> newContact.name;
        std::cout << "Enter phone number: ";
        std::cin >> newContact.phoneNumber;
        std::cout << "Enter email address: ";
        std::cin >> newContact.emailAddress;

        contacts.push_back(newContact);

        std::cout << "Add another contact? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Contacts:\n";
    for (const Contact& contact : contacts) {
        std::cout << "Name: " << contact.name << "\n";
        std::cout << "Phone Number: " << contact.phoneNumber << "\n";
        std::cout << "Email Address: " << contact.emailAddress << "\n\n";
    }

    return 0;
}
