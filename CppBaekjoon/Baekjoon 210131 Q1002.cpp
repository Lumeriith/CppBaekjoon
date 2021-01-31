#include <iostream>
#include <cmath>

int main()
{
    int x1, y1, x2, y2;
    unsigned int r1, r2;

    size_t t;
    std::cin >> t;

    int *result = new int[t];

    double dist;

    for (size_t i = 0; i < t; i++)
    {
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dist = std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        if (dist == 0)
            result[i] = r1 == r2 ? -1 : 0;
        else
        {
            if (r1 + r2 < dist)
                result[i] = 0;
            else if (r1 + r2 == dist) // I hate this
                result[i] = 1;
            else
            {
                unsigned int rdiff = std::abs((int)r1 - (int)r2);
                if (rdiff < dist)
                    result[i] = 2;
                else if (rdiff == dist) // I really hate this
                    result[i] = 1;
                else
                    result[i] = 0;
            }
        }
    }

    for (size_t i = 0; i < t; i++)
    {
        std::cout << result[i] << std::endl;
    }

    delete[] result;
}
// I also hate the fact this code actually passed