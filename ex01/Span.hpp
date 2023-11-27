#pragma once
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _numbers;
    public:
        Span(unsigned int n);
        ~Span();

        void addNumber(int num);
        int shortestSpan();
        int longestSpan();

        class LimitStoreException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class NoSpanFound : public std::exception
        {
            public:
                const char* what() const throw();
        };
};