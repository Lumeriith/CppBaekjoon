#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n % 5 == 0) std::cout << n / 5 << std::endl;
    else if (n % 5 % 3 == 2)
    {
        if (n < 10) std::cout << -1 << std::endl;
        else std::cout << n / 5 - 2 + (n % 5 + 10) / 3 << std::endl;
    }
    else if (n % 5 % 3 == 1)
    {
        if (n < 5) std::cout << -1 << std::endl;
        else std::cout << n / 5 - 1 + (n % 5 + 5) / 3 << std::endl;
    }
    else
    {
        std::cout << n / 5 + 1 << std::endl;
    }
}