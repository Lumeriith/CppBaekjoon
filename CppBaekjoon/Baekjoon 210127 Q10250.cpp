#include <iostream>

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
        if (n % h == 0) result[i] += 100 * h - 1;
    }

    for (size_t i = 0; i < t; i++)
    {
        std::cout << result[i] << std::endl;
    }
}