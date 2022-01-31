#ifndef FIXED_HPP
# define FIXED_HPP
# define RED "\033[1;38;2;255;0;0m"
# define GREEN "\033[1;38;2;0;200;0m"
# define BLUE "\033[1;38;2;0;0;255m"
# define BROWN "\033[1;38;2;200;60;60m"
# define RANDOM "\033[1;38;2;90;200;90m"
# define EOC "\033[0m"

# include <iostream>
# include <cmath>

class Fixed {

private:
	int					_fix_ptr;
	static const int	_fractional_bits = 8;

public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();

	Fixed & operator= (Fixed const & result);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator << (std::ostream & out, Fixed const & input);

#endif