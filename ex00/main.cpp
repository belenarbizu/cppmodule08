#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    std::cout << "--------EASYFIND--------" << std::endl;
    std::cout << "find 2: " << *easyfind(v1, 2) << std::endl;
    std::cout << "find 6: " << *easyfind(v1, 6) << std::endl;
    std::cout << "find 3: " << *easyfind(v1, 3) << std::endl;
    return 0;
}