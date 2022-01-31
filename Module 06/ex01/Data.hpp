#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct	Data
{
	int	c;
};

uintptr_t serialize(Data* obj);
Data* deserialize(uintptr_t raw);

#endif