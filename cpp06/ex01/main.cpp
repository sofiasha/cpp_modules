#include <iostream>
#include <string>

typedef struct s_data 
{
	std::string	str;
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
	std::cout << data.str << std::endl;
	raw = serialize(&data);
	ptr = deserialize(raw);
	std::cout << "Data struct address: " << &data << std::endl;
	std::cout << "After deserializing: " << ptr << std::endl;
	std::cout << data.str << std::endl;
}
