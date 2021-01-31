#include <iostream>

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

int main()
{
    size_t t;
    std::cin >> t;

    unsigned int *a = new unsigned int[t];
    unsigned int *b = new unsigned int[t];
    unsigned int n, c;

    for (size_t i = 0; i < t; i++)
    {
        std::cin >> n;
        c = 0;
        while (true)
        {
            if (is_prime(n / 2 - c) && is_prime(n / 2 + c))
            {
                a[i] = n / 2 - c;
                b[i] = n / 2 + c;
                break;
            }
            c++;
        }
    }

    for (size_t i = 0; i < t; i++)
    {
        std::cout << a[i] << ' ' << b[i] << std::endl;
    }

    delete[] a;
    delete[] b;
}