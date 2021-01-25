#include <iostream>
#include <vector>

long sum(std::vector<int>& a)
{
	long result = 0;
	for (size_t i = 0; i < a.size(); i++) {
		result += a[i];
	}
	return result;
}