#pragma once
#include <algorithm>
#include <iostream>
#include <vector>

template <class T>
std::vector<int>::iterator easyfind(T first, int second) {
    std::vector<int>::iterator found = std::find(first.begin(), first.end(), second);
    return found;
}