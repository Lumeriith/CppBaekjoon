#include <iostream>

int main()
{
    unsigned int a, b, v, result;
    std::cin >> a >> b >> v;
    
    result = (v - a) / (a - b) + 1;
    if ((v - a) % (a - b) > 0) result++;

    std::cout << result << std::endl;
}