#include <iostream>

int main()
{
    size_t n;
    std::cin >> n;

    char word[101];
    char prev;
    unsigned int count = 0;
    bool is_forbidden['z' - 'a' + 1];

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> word;
        prev = '\0';
        for (size_t j = 0; j < 'z' - 'a' + 1; j++) is_forbidden[j] = false;
        for (size_t j = 0; j < 101; j++)
        {
            if (word[j] == '\0')
            {
                //std::cout << word << std::endl;
                count++;
                break;
            }
            if (is_forbidden[word[j] - 'a']) break;
            if (prev != '\0' && prev != word[j]) is_forbidden[prev - 'a'] = true;
            prev = word[j];
        }
    }

    std::cout << count << std::endl;
}