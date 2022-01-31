#include "Fixed.hpp"

Fixed::Fixed() : _fix_ptr(0) {
	std::cout << GREEN << "Default constructor called" << EOC << std::endl;
}

Fixed::~Fixed() {
	std::cout << RED << "Destructor called" << EOC << std::endl;
}

Fixed::Fixed(const int val) : _fix_ptr(val << Fixed::_fractional_bits) {
	std::cout << GREEN << "Int constructor called" << EOC << std::endl;
}

Fixed::Fixed(const float val) : _fix_ptr(roundf(val * (1 << Fixed::_fractional_bits))) {
	std::cout << GREEN << "Float constructor called" << EOC << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << BLUE << "Copy constructor called" << EOC << std::endl;
	*this = src;
}

int		Fixed::getRawBits(void) const {
	// std::cout << BROWN << "getRawBits member function called" << EOC << std::endl;
	return (_fix_ptr);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << RANDOM << "setRawBits member function called" << EOC << std::endl;
	_fix_ptr = raw << _fractional_bits;
}

int		Fixed::toInt(void) const {
	return (_fix_ptr >> Fixed::_fractional_bits);
}

float	Fixed::toFloat(void) const {
	return ((float)_fix_ptr / (float)(1 << Fixed::_fractional_bits));
}

Fixed & Fixed::operator= (Fixed const & result) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &result)
		_fix_ptr = result.getRawBits();
	return (*this);
}

std::ostream & operator << (std::ostream & out, Fixed const & input) {
	return (out << input.toFloat());
}