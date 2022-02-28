#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{ // создаем темплейтный массив и стандартный массив, заполняем рандомными числами
	Array<int> numbers(MAX_VAL); 
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{ // проверка работоспособности конструктора копирования и оператора = ; проверка на глубокое копирование крч
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++) // проверка на совпадение значений в массивах, то есть если они разные, выдаст ошибку
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try // проверяем оператор []; если индекс неверный, вбрасываем ошибки
	{
		numbers[-2] = 0; // ложный индекс,  отлавливаем и вбрасываем эксепшн
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{ // проверка на выход за границу
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}