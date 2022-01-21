#include "ClassPhoneBook.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::print_table()
{
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < CONT_NUM; i++)
	{
		if (!contacts[i].get_first_name().empty())
		{
			std::cout << '|' << std::setw(10) << i + 1 << '|';
			contacts[i].print();
		}
	}
}

void PhoneBook::add_cont()
{
	for (int i = CONT_NUM - 1; i > 0; i--)
		contacts[i] = contacts[i - 1];
	contacts[0].clear_cont();
	while (contacts[0].get_first_name().empty())
	{
		std::cout << "--- Enter your first name ---\n";
		contacts[0].set_first_name();
	}
	while (contacts[0].get_last_name().empty())
	{
		std::cout << "--- Enter your last name ---\n";
		contacts[0].set_last_name();
	}
	while (contacts[0].get_nickname().empty())
	{
		std::cout << "--- Enter your nickname ---\n";
		contacts[0].set_nickname();
	}
	while (contacts[0].get_phone_number().empty())
	{
		std::cout << "--- Enter your phone number ---\n";
		contacts[0].set_phone_number();
	}
	while (contacts[0].get_darkest_secret().empty())
	{
		std::cout << "--- Enter your darkest secret ---\n";
		contacts[0].set_darkest_secret();
	}
}

void PhoneBook::search_cont()
{
	int index;
	std::string str;

	std::cout << "\n--- Enter index of the needed contact ---\n";
	std::getline(std::cin, str);
	try {
		index = std::stoi(str) - 1;
	}
	catch(std::invalid_argument) {
		std::cout << "Invalid index, use only numbers" << std::endl;
		return;
	}

	if (index < 0 || index > 7 || contacts[index].get_first_name().empty())
	{
		std::cout << "Invalid index" << std::endl;
	}
	else
	{
		std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
		std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
		std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].get_darkest_secret() << std::endl;
	}
}

