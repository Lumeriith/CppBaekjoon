#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    unsigned int r;

    std::cin >> r;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << r * r * M_PI << std::endl;
    std::cout << r * r * 2.0 << std::endl;
}