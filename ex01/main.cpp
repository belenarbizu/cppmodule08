#include "Span.hpp"

//añadir la funcion que añade varios numeros a la vez

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
    
    return 0;
}