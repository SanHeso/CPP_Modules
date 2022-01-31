#include "Fixed.hpp"

Fixed::Fixed() : _fix_ptr(0) {
	// std::cout << GREEN << "Default constructor called" << EOC << std::endl;
}

Fixed::~Fixed() {
	// std::cout << RED << "Destructor called" << EOC << std::endl;
}

Fixed::Fixed(const int val) : _fix_ptr(val << Fixed::_fractional_bits) {
	// std::cout << GREEN << "Int constructor called" << EOC << std::endl;
}

Fixed::Fixed(const float val) : _fix_ptr(roundf(val * (1 << Fixed::_fractional_bits))) {
	// std::cout << GREEN << "Float constructor called" << EOC << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	// std::cout << BLUE << "Copy constructor called" << EOC << std::endl;
	*this = src;
}

int		Fixed::getRawBits(void) const {
	// std::cout << BROWN << "getRawBits member function called" << EOC << std::endl;
	return (_fix_ptr);
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << RANDOM << "setRawBits member function called" << EOC << std::endl;
	_fix_ptr = raw << _fractional_bits;
}

int		Fixed::toInt(void) const {
	return (_fix_ptr >> Fixed::_fractional_bits);
}

float	Fixed::toFloat(void) const {
	return ((float)_fix_ptr / (float)(1 << Fixed::_fractional_bits));
}

Fixed & Fixed::operator= (Fixed const & result) {
	// std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &result)
		_fix_ptr = result.getRawBits();
	return (*this);
}

std::ostream & operator << (std::ostream & out, Fixed const & input) {
	return (out << input.toFloat());
}

bool Fixed::operator> (Fixed const &src) const {
	return (this->_fix_ptr > src._fix_ptr);
}

bool Fixed::operator< (Fixed const &src) const {
	return (this->_fix_ptr < src._fix_ptr);
}

bool Fixed::operator>= (Fixed const &src) const {
	return (this->_fix_ptr >= src._fix_ptr);
}

bool Fixed::operator<= (Fixed const &src) const {
	return (this->_fix_ptr <= src._fix_ptr);
}

bool Fixed::operator== (Fixed const &src) const {
	return (this->_fix_ptr == src._fix_ptr);
}

bool Fixed::operator!= (Fixed const &src) const {
	return (this->_fix_ptr != src._fix_ptr);
}

Fixed Fixed::operator+ (Fixed const &src) {
	Fixed	obj(*this);
	long	val1, val2;

	val1 = (long)this->getRawBits();
	val2 = (long)src.getRawBits();
	obj.setRawBits(val1 + val2);
	return (obj);
}

Fixed Fixed::operator- (Fixed const &src) {
	Fixed	obj(*this);
	long	val1, val2;

	val1 = (long)this->getRawBits();
	val2 = (long)src.getRawBits();
	obj.setRawBits(val1 - val2);
	return (obj);
}

Fixed Fixed::operator* (Fixed const &src) {
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/ (Fixed const &src) {
	return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed &Fixed::operator++() {
	if (this->_fix_ptr == 8)
		this->_fix_ptr = 0;
	else
		++this->_fix_ptr;

	return *this;
}

Fixed &Fixed::operator--() {
	if (this->_fix_ptr == 8)
		this->_fix_ptr = 0;
	else
		--this->_fix_ptr;

	return *this;
}

Fixed Fixed::operator++(int) {
	// Создаем временный объект класса Fixed с текущим значением переменной _fix_ptr
	Fixed temp(*this);

	// Используем оператор инкремента версии префикс для реализации перегрузки оператора инкремента версии постфикс
	++(*this);

	// Возвращаем временный объект
	return temp;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);

	--(*this);

	return temp;
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2) {
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2) {
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1 > f2)
		return (f1);
	return (f2);
}