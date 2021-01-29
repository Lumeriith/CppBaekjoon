#include <iostream>
#define prevprev input[i - 2]
#define prev input[i - 1]
#define curr input[i]

int main()
{
    char input[101];
    std::cin >> input;

    unsigned int count = 0;

    for (size_t i = 0; i < 100; i++)
    {
        if (input[i] == '\0') break;
        count++;

        if (i > 1 && prevprev == 'd' && prev == 'z' && curr == '=') count -= 2;
        else if (i > 0 && (prev == 'c' || prev == 'd') && curr == '-') count--;
        else if (i > 0 && (prev == 's' || prev == 'z' || prev == 'c') && curr == '=') count--;
        else if (i > 0 && (prev == 'l' || prev == 'n') && curr == 'j') count--;
        
    }

    std::cout << count << std::endl;
}