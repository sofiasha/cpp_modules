#include <iostream>
#include <string>

typedef struct s_data 
{
	std::string	str;
	int			i;
} Data;

// переводит указатель на структуру в инт
uintptr_t	serialize(Data* ptr) 
{
	return reinterpret_cast<uintptr_t>(ptr);
}

// наоборот
Data*		deserialize(uintptr_t raw) 
{
	return reinterpret_cast<Data*>(raw);
}

int	main() {
	Data		data;
	uintptr_t	raw;
	Data*		ptr;

	data.str = "cpp module 06";
	data.i = 5;

	std::cout << "Str: " << data.str << std::endl;
	std::cout << "int: " << data.i << std::endl;
	// std::cout << "Data struct address: " << &data << std::endl;

	raw = serialize(&data);
	ptr = deserialize(raw);

	// std::cout << "After deserializing: " << ptr << std::endl;
	std::cout << "Str after: " << data.str << std::endl;
	std::cout << "int after: " << data.i << std::endl;
}
