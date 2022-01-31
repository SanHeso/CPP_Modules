#include <iostream>
#include <cstdlib>

class Base {
public:
	virtual ~Base(){}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

void identify(Base *p) {
	if (dynamic_cast<A*>(p) != 0) {
		std::cout << "This is A" << std::endl;
	}
	else if (dynamic_cast<B*>(p) != 0) {
		std::cout << "This is B" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != 0) {
		std::cout << "This is C" << std::endl;
	}
}

void identify(Base &p) {
	if (dynamic_cast<A*>(&p) != 0) {
		std::cout << "This is A" << std::endl;
	}
	else if (dynamic_cast<B*>(&p) != 0) {
		std::cout << "This is B" << std::endl;
	}
	else if (dynamic_cast<C*>(&p) != 0) {
		std::cout << "This is C" << std::endl;
	}
}

Base * generate(void) {
	std::srand(std::time(nullptr));

	switch (std::rand() % 3) {
		case 0 : return new A();
		case 1 : return new B();
		case 2 : return new C();
	}
	return NULL;
}

int main() {
	Base *base = generate();
	identify(*base);
	identify(base);
}
