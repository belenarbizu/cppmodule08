#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}
Span::~Span()
{
}

void Span::addNumber(int num)
{
    if (this->_numbers.size() >= this->_n)
        throw (Span::LimitStoreException());
    this->_numbers.push_back(num);
}
int Span::shortestSpan()
{
    int shortest = 0;
    std::sort(this->_numbers.begin(), this->_numbers.end());
    for (std::vector<int>::iterator i = this->_numbers.begin(); i != this->_numbers.end(); i++)
    {
        if (i + 1)
        {
            
        }
    }
    return shortest;
}
int Span::longestSpan()
{
    //minmax_element??
    if (this->_numbers.size() <= 1)
        throw (Span::NoSpanFound());
    int min = std::min_element(this->_numbers.begin(), this->_numbers.end());
    int max = std::max_element(this->_numbers.begin(), this->_numbers.end());
    return max - min;
}

const char* Span::LimitStoreException::what() const throw()
{
    return ("Can't store more numbers");
}

const char* Span::NoSpanFound::what() const throw
{
    return ("Can't find span");
}