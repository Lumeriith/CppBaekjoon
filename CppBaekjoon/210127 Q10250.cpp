#include <iostream>

// INCOMPLETE

int main()
{
    size_t t;
    unsigned int h, w, n;

    std::cin >> t;
    unsigned int result[t];

    for (size_t i = 0; i < t; i++)
    {
        std::cin >> h >> w >> n;
        result[i] = (n / h + 1) + (n % h) * 100;
    }

    for (size_t i = 0; i < t; i++)
    {
        std::cout << result[i] << std::endl;
    }
}