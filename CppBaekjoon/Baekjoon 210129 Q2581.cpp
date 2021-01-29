#include <iostream>

bool is_prime(unsigned int);

int main()
{
    unsigned int m, n;

    std::cin >> m >> n;

    unsigned int primesum = 0;
    unsigned int primemin;
    for (unsigned int i = m; i <= n; i++)
    {
        if (is_prime(i))
        {
            primesum += i;
            if (primemin > i)
                primemin = i;
        }
    }
    if (primesum == 0)
        std::cout << -1 << std::endl;
    else
        std::cout << primesum << std::endl
                  << primemin << std::endl;
}

bool is_prime(unsigned int num)
{
    if (num <= 1)
        return false;
    for (unsigned int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}