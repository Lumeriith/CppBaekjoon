#include <iostream>
#include <string>

int main()
{
    std::string a, b, c;
    int bbba = 4;
    std::cin >> a >> b;

    size_t maxlength = a.length();
    if (b.length() > maxlength)
        maxlength = b.length();
    bool goup = false;

    for (size_t i = 0; i < maxlength; i++)
    {
        c = '0' + c;

        if (a.length() >= i + 1)
        {
            c[0] += a[a.length() - i - 1] - '0';
        }

        if (b.length() >= i + 1)
        {
            c[0] += b[b.length() - i - 1] - '0';
        }

        if (goup)
            c[0] += 1;
        goup = false;

        if (c[0] > '9')
        {
            goup = true;
            c[0] -= '9' - '0' + 1;
        }
    }

    if (goup)
        c = '1' + c;

    std::cout << c << std::endl;
}