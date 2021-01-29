#include <iostream>

int main()
{
    char a[4], b[4];
    std::cin >> a >> b;

    for (size_t i = 2; i >= 0; i--)
    {
        if (a[i] > b[i])
        {
            std::cout << a[2] << a[1] << a[0] << std::endl;
            break;
        }
        else if (a[i] < b[i])
        {
            std::cout << b[2] << b[1] << b[0] << std::endl;
            break;
        }
    }
}