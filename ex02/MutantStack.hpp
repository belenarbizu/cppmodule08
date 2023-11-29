#pragma once

#include <iostream>
#include <stack>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::const_iterator iterator;
        
        MutantStack() {};
        ~MutantStack() {};
        iterator begin() {return std::stack<T>::c.begin();};
        iterator end() {return std::stack<T>::c.end();};

};