#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {

private:
	T	*_array;
	unsigned int	_size;

public:
	Array(void);
	Array(unsigned int size);
	Array(const Array &src);
	~Array(void);

	unsigned int getSize(void) const;

	Array &operator=(const Array &src);
	T &operator[](unsigned int index);
};

template <typename T>
Array<T>::Array(void) {
	this->_size = 0;
	this->_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int size) {
	this->_size = size;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array &src) {
	*this = src;
}

template <typename T>
Array<T>::~Array(void) {
	delete [] this->_array;
}

template <typename T>
unsigned int	Array<T>::getSize(void) const {
	return (this->_size);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src) {
	if (this == &src)
		return (*this);
	this->_size = src.getSize();
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
	if (index < 0 || index >= this->_size)
		throw std::out_of_range("Invalid index");
	else
		return (_array[index]);
}

#endif