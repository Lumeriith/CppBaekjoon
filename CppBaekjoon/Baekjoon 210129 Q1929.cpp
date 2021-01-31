#include <iostream>
#include <cmath>

int main()
{
    unsigned int m, n;
    std::cin >> m >> n;

    bool *sieve = new bool[n + 1];

    for (size_t i = 0; i < n + 1; i++)
        sieve[i] = false;

    sieve[0] = true;
    sieve[1] = true;

    size_t maxmul = (int)std::sqrt(n);
    if (maxmul * maxmul != n)
        maxmul++;

    for (size_t i = 2; i <= maxmul; i++)
    {
        if (sieve[i])
            continue;
        for (size_t j = 2; i * j < n + 1; j++)
            sieve[i * j] = true;
    }

    for (size_t i = m; i <= n; i++)
    {
        if (!sieve[i])
            std::cout << i << '\n';
    }

    delete[] sieve;
}