#include <iostream>
#include <math.h>

int main()
{
    size_t testcases;
    std::cin >> testcases;

    unsigned int x, y, dist, n;

    unsigned int *result = new unsigned int[testcases];
    for (size_t i = 0; i < testcases; i++)
    {
        std::cin >> x >> y;
        dist = y - x;
        if (dist == 0)
        {
            result[i] = 0;
            continue;
        }
        n = (int)std::sqrt(dist);
        if (dist == n * n)
            n--;
        result[i] = 2 * n;
        if (dist >= ((n * n + (n + 1) * (n + 1) + 1) / 2))
            result[i]++;
    }

    for (size_t i = 0; i < testcases; i++)
    {
        std::cout << result[i] << std::endl;
    }

    delete[] result;
}