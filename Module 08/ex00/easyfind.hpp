#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
# define EOC "\033[0m"
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"

template <typename T>
typename T::iterator easyfind(T &conteiner, int n) {
	return (std::find(conteiner.begin(), conteiner.end(), n));
}

#endif