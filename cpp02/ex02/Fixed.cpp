#include "Fixed.hpp"
#include <cmath>

//static

Fixed&	Fixed::min(Fixed& f1, Fixed& f2) {
	return f1.raw < f2.raw ? f1 : f2;
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2) {
	return f1.raw < f2.raw ? f1 : f2;
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2) {
	return f1.raw > f2.raw ? f1 : f2;
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2) {
	return f1.raw > f2.raw ? f1 : f2;
}

//constructor

Fixed::Fixed() : raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f) : raw(f.raw) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int dec) : raw(dec << fbits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fl)
	: raw(static_cast<int>(std::roundf(fl * (1 << Fixed::fbits)))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//member funcs

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->raw;
}

void	Fixed::setRawBits(int const raw) {
	std::cout <<"setRawBits member function called" << std::endl;
	this->raw = raw;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(this->raw) / (1 << fbits);
}

int		Fixed::toInt(void) const {
	return this->raw >> Fixed::fbits;
}

//assignment

Fixed&	Fixed::operator=(const Fixed& other) {
	std::cout << "Assignation operator called" << std::endl;
	this->raw = other.raw;
	return *this;
}

//comparison

bool	Fixed::operator ==(const Fixed& other) {
	return this->raw == other.raw;
}

bool	Fixed::operator !=(const Fixed& other) {
	return this->raw != other.raw;
}

bool	Fixed::operator <(const Fixed& other) {
	return this->raw < other.raw;
}

bool	Fixed::operator >(const Fixed& other) {
	return this->raw > other.raw;
}

bool	Fixed::operator <=(const Fixed& other) {
	return this->raw <= other.raw;
}

bool	Fixed::operator >=(const Fixed& other) {
	return this->raw <= other.raw;
}

//arithmetic

Fixed	Fixed::operator +(const Fixed& other) const {
	Fixed	newFixed;

	newFixed.setRawBits(this->raw + other.raw);
	return newFixed;
}
Fixed	Fixed::operator -(const Fixed& other) const {
	Fixed	newFixed;

	newFixed.setRawBits(this->raw - other.raw);
	return newFixed;
}
Fixed	Fixed::operator *(const Fixed& other) const {
	Fixed	newFixed(this->toFloat() * other.toFloat());

	return newFixed;
}
Fixed	Fixed::operator /(const Fixed& other) const {
	Fixed	newFixed(this->toFloat() / other.toFloat());

	return newFixed;
}

//++ --

Fixed&	Fixed::operator ++(void) {
	this->raw++;
	return *this;
}

Fixed&	Fixed::operator --(void) {
	this->raw--;
	return *this;
}

Fixed	Fixed::operator ++(int cnt) {
	Fixed	temp(*this);

	if (cnt)
		this->raw += cnt;
	else
		this->raw++;
	return temp;
}

Fixed	Fixed::operator --(int cnt) {
	Fixed	temp(*this);

	if (cnt)
		this->raw += cnt;
	else
		this->raw++;
	return temp;
}

//insert

std::ostream&	operator<<(std::ostream& os, const Fixed& f) {
	os << f.toFloat();
	return os;
}
