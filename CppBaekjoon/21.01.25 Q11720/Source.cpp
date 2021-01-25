#include <iostream>

int main()
{
	size_t length;
	std::cin >> length;
	
	char* numcstr = new char[length];
	std::cin >> numcstr;
	
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += numcstr[i] - '0';
	}
	std::cout << sum;
}