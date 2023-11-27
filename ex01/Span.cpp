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
    if (this->_numbers.size() <= 1)
        throw (Span::NoSpanFound());
    std::sort(this->_numbers.begin(), this->_numbers.end());
    std::vector<int>::iterator init = this->_numbers.begin();
    int shortest = *(init + 1) - *init;
    for (init = this->_numbers.begin(); init != this->_numbers.end(); init++)
    {
        if ((init < this->_numbers.end() - 1) && (*(init + 1) - *init < shortest))
        {
            shortest = *(init + 1) - *init;
        }
    }
    return shortest;
}
int Span::longestSpan()
{
    if (this->_numbers.size() <= 1)
        throw (Span::NoSpanFound());

    std::vector<int>::iterator min = std::min_element(this->_numbers.begin(), this->_numbers.end());
    std::vector<int>::iterator max = std::max_element(this->_numbers.begin(), this->_numbers.end());
    return *max - *min;
}

const char* Span::LimitStoreException::what() const throw()
{
    return ("Can't store more numbers");
}

const char* Span::NoSpanFound::what() const throw()
{
    return ("Can't find span");
}