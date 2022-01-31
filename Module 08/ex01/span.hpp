#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <exception>

class Span {

private:
	std::vector<int> _cont;
	unsigned int _size;
	Span();

public:
	Span(unsigned int n);
	Span(const Span &src);
	~Span();
	Span &operator=(const Span &src);

	void addNumber(int num);
	void addNumber(int left, int right);
	void addNumber(std::vector<int>::iterator left, std::vector<int>::iterator right);
	int shortestSpan();
	int longestSpan();

	class SpanException : public std::exception {
	private:
		std::string _err_message;
	public:
		SpanException(std::string err_message);
		virtual ~SpanException() throw ();
		virtual const char* what() const throw();
	};
};

#endif