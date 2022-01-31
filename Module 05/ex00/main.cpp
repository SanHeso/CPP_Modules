#include "Bureaucrat.hpp"
#include <string.h>

void standart(std::string name, int grade){
	try
	{
		Bureaucrat n(name, grade);
		std::cout << GREEN << "YES: " << n << EOC << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "NO: " << name << ": " << e.what() << EOC << std::endl;
	}
}

void decrement (std::string name, int grade, int decrement)
{
	try
	{
		Bureaucrat n(name, grade);
		std::cout << GREEN << "YES: " << n << EOC << std::endl;
		n.decrementGrade(decrement);
		std::cout << GREEN << "YES: " << n << EOC << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "NO: " << name << ": " << e.what() << EOC << std::endl;
	}
}

void increment (std::string name, int grade, int increment)
{
	try
	{
		Bureaucrat n(name, grade);
		std::cout << GREEN << "YES: " << n << EOC << std::endl;
		n.incrementGrade(increment);
		std::cout << GREEN << "YES: " << n << EOC << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "NO: " << name << ": " << e.what() << EOC << std::endl;
	}
}

int		main() {
	standart("lower", 150);
	standart("higher", 1);
	standart("lower than necessary", 151);
	standart("higher than necessary", 0);
	decrement("l-1", 150, 1);
	increment("h+1", 1, 1);
	decrement("l-1", 140, 1);
	increment("h+1", 10, 1);


	return (0);
}