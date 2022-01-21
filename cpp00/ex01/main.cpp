#include "ClassPhoneBook.hpp"
#include <iostream>

void ph_menu(void)
{
    std::cout << "  PHONEBOOK MENU" << std::endl;
    std:: cout << "ADD      Add new contact" << std::endl;
    std:: cout << "SEARCH   Search contact" << std::endl;
    std:: cout << "EXIT     Exit phonebook" << std::endl;
}

int     main()
{
    std::string cmd;
    PhoneBook   phoneBook;

    ph_menu();
	while (true)
	{
		std::cout << "Enter command (add, search, exit)" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof() || cmd == "EXIT" || cmd == "exit")
		{
			std::cout << "Already leaving? Cya!\n";
			std::exit(1);
		}
		else if (cmd == "ADD" || cmd == "add")
			phoneBook.add_cont();
		else if (cmd == "SEARCH" || cmd == "search")
		{
			phoneBook.print_table();
			phoneBook.search_cont();
		}
		else
			std::cout << "Invalid command; choose only from the menu" << std::endl;
	}
}