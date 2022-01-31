#pragma once
#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	std::string	arrayLevels[4];
	typedef void (Karen::*Methods) (void);
	Methods arrayMethods[4];

public:
	void complain(std::string level);
	Karen();
	~Karen();
};

#endif