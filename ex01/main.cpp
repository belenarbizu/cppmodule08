#include "Span.hpp"

int main(void)
{
    Span sp1(5);
    
    try
    {
        std::cout << sp1.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    sp1.addNumber(1);
    
    try
    {
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    sp1.addNumber(5);
    sp1.addNumber(3);
    sp1.addNumber(10);
    sp1.addNumber(7);
    sp1.showNumbers();

    try
    {
        sp1.addNumber(4);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "shortest: " << sp1.shortestSpan() << std::endl;
    std::cout << "longest: " << sp1.longestSpan() << std::endl;
    
    try
    {
        Span sp2(10);
        std::vector<int> sv1(10, 100);
        sp2.addAllNumbers(sv1);
        sp2.showNumbers();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Span sp3(10);
        std::vector<int> sv2(11, 100);
        sp3.addAllNumbers(sv2);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}