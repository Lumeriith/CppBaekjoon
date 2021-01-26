#include <iostream>
#include <string>

int main()
{
    std::string input;
    unsigned int count = 0;

    std::getline(std::cin, input);

    /*
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ') count++;
    }

    if (input[0] == ' ') count--;
    if (input.length() > 1 && input[input.length() - 1] == ' ') count--;
    */
    bool haswordstarted = false;

    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ' && haswordstarted)
        {
            haswordstarted = false;
            count++;
        }
        else if (input[i] != ' ') haswordstarted = true;
    }
    if (haswordstarted) count++;

    std::cout << count << std::endl;
}
