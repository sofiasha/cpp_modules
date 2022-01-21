#ifndef CLASSCONTACT_HPP
#define CLASSCONTACT_HPP

#include <iostream>

class Contact {

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	void		set_first_name();
	void		set_last_name();
	void		set_nickname();
	void		set_phone_number();
	void		set_darkest_secret();
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	std::string	get_phone_number();
	std::string	get_darkest_secret();
	std::string cut(std::string str);
	void		print();
	void 		clear_cont();
};

#endif
