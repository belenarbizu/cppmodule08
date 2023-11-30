#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}
Span::~Span()
{
}

Span::Span(const Span & sp)
{
    this->_n = sp._n;
    this->_numbers = sp._numbers;
    *this = sp;
}

Span& Span::operator=(const Span & sp)
{
    this->_n = sp._n;
    this->_numbers = sp._numbers;
    return *this;
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
    std::vector<int> numCopy(this->_numbers);
    std::sort(numCopy.begin(), numCopy.end());
    std::vector<int>::iterator init = numCopy.begin();
    int shortest = *(init + 1) - *init;
    for (init = numCopy.begin(); init != numCopy.end(); init++)
    {
        if ((init < numCopy.end() - 1) && (*(init + 1) - *init < shortest))
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

void Span::addAllNumbers(std::vector<int> numbers)
{
    for (std::vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++)
    {
        if (std::distance(numbers.begin(), i) == this->_n)
            throw (Span::LimitStoreException());
        this->_numbers.push_back(*i);
    }
}

void Span::showNumbers()
{
    for (std::vector<int>::iterator i = this->_numbers.begin(); i != this->_numbers.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

const char* Span::LimitStoreException::what() const throw()
{
    return ("Can't store more numbers");
}

const char* Span::NoSpanFound::what() const throw()
{
    return ("Can't find span");
}