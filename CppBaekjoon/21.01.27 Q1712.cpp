#include <iostream>

int main()
{
    unsigned int a, b, c, res;

    std::cin >> a >> b >> c;

    if (b >= c)
    {
        std::cout << -1 << std::endl;
        return 0;
    }

    std::cout << a / (c - b) + 1 << std::endl;
}