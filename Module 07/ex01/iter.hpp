#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *addr, size_t len, void(*foo)(T const &)) {
	for (size_t i = 0; i < len; ++i) {
		foo(addr[i]);
	}
}

#endif