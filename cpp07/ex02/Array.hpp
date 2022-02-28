#ifndef ARRAY_H
# define ARRAY_H

# include <cstddef>

# define EXCEPT_MSG "Wrong index (out of range)"

template<typename T>
class Array {
public:
	Array() : arr_size(0) {}; //  пустой 
	Array(unsigned int n) : arr_size(n), elem(new T[n]) {}; // с размером n 
	Array(const Array& other) : arr_size(other.arr_size), elem(other.cloneTab()) {}; // констр копирования
	~Array() { delete[] elem; };

	const size_t&	size() const { return arr_size; }; // возвр кол-во элементов массива

	Array&		operator =(const Array& a) {
		if (this == &a)
			return *this;
		arr_size = a.arr_size;
		delete[] elem;
		elem = a.cloneTab();
		return *this;
	}

// если сделаем онли конст, то
// нельзя менять значения выведенные через скобки,
// а если не делать конст, то
// в случае объявл конст объекта можно будет менять значение
// если метод заканчивается на конст, то это метод для конст объекта
	T&			operator[](size_t index) {
	if (index >= arr_size)
		throw std::out_of_range(EXCEPT_MSG);
	return elem[index];
	}

	const T&	operator[](size_t index) const {
		if (index >= arr_size)
			throw std::out_of_range(EXCEPT_MSG);
		return elem[index];
	}

private:
	size_t	arr_size;
	T*		elem;
	
	T*		cloneTab() const { // глубокое копирование, чисто для конструктора копирования и присвоения чтобы наверху по два раза не писать
		T*	copyTab = new T[arr_size];

		for (size_t i = 0; i < arr_size; i++) {
			copyTab[i] = elem[i];
		}
		return copyTab;
	}
};

#endif
