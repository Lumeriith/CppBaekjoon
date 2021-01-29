#include <iostream>
#include <math.h>

/*

1 = 1
2 = 1 + 1
3 = 1 + 1 + 1
4 = 1 + 2 + 1
5 = 1 + 2 + 1 + 1
6 = 1 + 2 + 2 + 1
7 = 1 + 2 + 2 + 1 + 1
8 = 1 + 2 + 2 + 2 + 1
9 = 1 + 2 + 3 + 2 + 1
10= 1 + 2 + 3 + 2 + 1 + 1
11= 1 + 2 + 3 + 2 + 2 + 1

1           1
121         4
12321       9
1234321     16

1 = 1*
2 = 11
3 = 111
4 = 121*
5 = 1211
6 = 1221
7 = 12211
8 = 12221
9 = 12321*
10= 123211
11= 123221
12= 123321
13= 1233211
16= 1234321*

5 = 1 + 2 + 2 + 1

1 = 001 1*
2 = 002 2
3 = 003 3
4 = 012 3*
5 = 013 4 
6 = 022 4
7 = 023 5 
8 = 032 5
9 = 122 5*
10= 123 6

0*  0
1*  1
2   2
3   3
4*  3
5   4
6   4
7   5
8   5
9*  5
10  6
11  6
12  6
13  7
14  7
15  7
16* 7

1   1       1
2   1       2
3   2       3
5   2       4
7   3       5
10  3       6

0                    1
2   (2)  3    (3)    4
5   (4)  7    (5)   9
10<=  (6)   <13<=  (7)     <=16

131
sqrt(131) = 11.x

122(11^2)<=  <133((11^2 + 12^2)/2)<=  <=144(12^2)

2*11 or 2*11 + 1
*/

int main()
{
    size_t testcases;
    std::cin >> testcases;

    unsigned int x, y, dist, n;

    unsigned int result[testcases];
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
}