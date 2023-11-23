#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v1;
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "--------EASYFIND--------" << std::endl;
    std::cout << *easyfind(v1, 2) << std::endl;
    std::cout << *easyfind(v1, 6) << std::endl;
    std::cout << *easyfind(v1, 3) << std::endl;
    return 0;
}