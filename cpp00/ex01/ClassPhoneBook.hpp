#include "ClassContact.hpp"

#ifndef CLASSPHONEBOOK_HPP
#define CLASSPHONEBOOK_HPP

#define CONT_NUM 8

class PhoneBook
{

private:
	Contact contacts[CONT_NUM];

public:
	void	print_table();
	void	add_cont();
	void 	search_cont();
};

#endif
