#include "span.hpp"

int		main() {
    std::cout << "------------------------------------" << std::endl;
    try {
        Span	sp(5);
        int		num;

        sp.addNumber(10);
        sp.addNumber(11);
        sp.addNumber(12);
        sp.addNumber(13);
        sp.addNumber(14);
        num = sp.shortestSpan();
        std::cout << "11 - 10 : " << num << std::endl;
        num = sp.longestSpan();
        std::cout << "14 - 10 : " << num << std::endl;
        sp.addNumber(15);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try {
        Span	sp(5);
        int		num;

        sp.addNumber(10);
        sp.addNumber(11);
        sp.addNumber(14);
        num = sp.shortestSpan();
        std::cout << "11 - 10 : " << num << std::endl;
        num = sp.longestSpan();
        std::cout << "14 - 10 : " << num << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try {
        Span	sp(500);
        int		num;

        sp.addNumber(1, 500);
        num = sp.shortestSpan();
        std::cout << "Shortest span on 500: " << num << std::endl;
        num = sp.longestSpan();
        std::cout << "Longest span on 500: " << num << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try {
        Span	sp(500);
        std::vector<int>	vec;
        int		num;

        vec.push_back(10);
        vec.push_back(11);
        vec.push_back(12);
        vec.push_back(13);
        vec.push_back(14);
        vec.push_back(15);
        vec.push_back(16);
        vec.push_back(17);
        vec.push_back(18);
        vec.push_back(19);
        vec.push_back(20);
        vec.push_back(21);
        vec.push_back(21);
        vec.push_back(22);
        vec.push_back(23);
        vec.push_back(24);
        vec.push_back(25);
        vec.push_back(26);
        vec.push_back(27);
        vec.push_back(28);
        vec.push_back(29);
        vec.push_back(30);
        vec.push_back(31);
        sp.addNumber(vec.begin(), vec.end());
        num = sp.shortestSpan();
        std::cout << "Shortest span on 10-31: " << num << std::endl;
        num = sp.longestSpan();
        std::cout << "Longest span on 10-31: " << num << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try {
        Span	sp(500);
        std::vector<int>	vec;
        int		num;

        vec.push_back(10);
        vec.push_back(11);
        vec.push_back(12);
        vec.push_back(13);
        vec.push_back(14);
        vec.push_back(15);
        vec.push_back(16);
        vec.push_back(17);
        vec.push_back(18);
        vec.push_back(19);
        vec.push_back(20);
        vec.push_back(21);
        vec.push_back(21);
        vec.push_back(22);
        vec.push_back(23);
        vec.push_back(24);
        vec.push_back(25);
        vec.push_back(26);
        vec.push_back(27);
        vec.push_back(28);
        vec.push_back(29);
        vec.push_back(30);
        vec.push_back(31);
        sp.addNumber(vec.end(), vec.begin());
        num = sp.shortestSpan();
        std::cout << "Shortest span on 10-31: " << num << std::endl;
        num = sp.longestSpan();
        std::cout << "Longest span on 10-31: " << num << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    return 0;
}