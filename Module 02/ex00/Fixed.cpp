#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0) {
	std::cout << GREEN << "Default constructor called" << EOC << std::endl;
}

Fixed::~Fixed() {
	std::cout << RED << "Destructor called" << EOC << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << BLUE << "Copy constructor called" << EOC << std::endl;
	*this = src;
}

int		Fixed::getRawBits(void) const {
	std::cout << BROWN << "getRawBits member function called" << EOC << std::endl;
	return (_RawBits);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << RANDOM << "setRawBits member function called" << EOC << std::endl;
	_RawBits = raw;
}

Fixed & Fixed::operator= (Fixed const & result) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &result)
		_RawBits = result.getRawBits();
	return (*this);
}