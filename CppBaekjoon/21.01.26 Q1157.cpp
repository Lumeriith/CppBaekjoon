#include <iostream>
#include <string>

int main()
{
    std::string inputstr;
    
    std::cin >> inputstr;
    
    unsigned int occ['Z' - 'A' + 1];
    char current;

    for (size_t i = 0; i < 'Z' - 'A' + 1; i++) occ[i] = 0;

    for (size_t i = 0; i < inputstr.length(); i++)
    {
        current = inputstr[i];
        if (current >= 'a') current -= 'a' - 'A'; // Upper the case
        occ[current - 'A']++;
    }   

    size_t maxindex;
    unsigned int maxocc;
    bool isduplicate = false;

    maxindex = 0;
    maxocc = occ[0];

    for (size_t i = 1; i < 'Z' - 'A' + 1; i++)
    {
        if (maxocc < occ[i])
        {
            maxindex = i;
            maxocc = occ[i];
            isduplicate = false;
        }
        else if (maxocc == occ[i])
        {
            isduplicate = true;
        }
    }
    if (isduplicate) std::cout << '?' << std::endl;
    else std::cout << (char)(maxindex + 'A') << std::endl;
}