#include <iostream>
#include <cstdlib>

class Base {
public:
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

// возвращает случайный тип (а б или с)
Base * generate(void) {
	std::srand(std::time(NULL));
	int	id = std::rand() % 3;

	switch (id) {
	case 0:
		std::cout << "An instance of class A created\n";
		return new A();
	case 1:
		std::cout << "An instance of class B created\n";
		return new B();
	case 2:
		std::cout << "An instance of class C created\n";
		return new C();
	default:
		std::cout << "An instance of class Base created\n";
		return new Base();
	}
}

// определяем, что пришло (а, б или с)
void identify(Base* p) {
	A*	a = dynamic_cast<A *>(p); // динамик каст возвращает 0 при неудаче и возвр указатель если каст удался
	if (a) { // т.е. если что-то вернулось, то печатаем А 
		std::cout << "A" << std::endl;
		return;
	}

	B*	b = dynamic_cast<B *>(p);
	if (b) {
		std::cout << "B" << std::endl;
		return;
	}

	C*	c = dynamic_cast<C *>(p);
	if (c) {
		std::cout << "C" << std::endl;
		return;
	}

	std::cout << "Base" << std::endl;
}

// принимает ссылку(она не может быть равна 0)
void identify(Base& p) {
	try {
		A&	a = dynamic_cast<A&>(p); // не может вернуть 0 при неудаче. Если здесь вернулся эксепшн, то переходим в кэтч
		(void) a;
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception& e) {}

	try {
		B&	b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception& e) {}

	try {
		C&	c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "C" << std::endl;
		return;
	} catch (std::exception& e) {}

	std::cout << "Base" << std::endl;
}

int	main() 
{
	Base*	p = generate();

	std::cout << "Pointer:\n";
	identify(p);
	std::cout << "Reference:\n";
	identify(*p);
	delete p;
}
