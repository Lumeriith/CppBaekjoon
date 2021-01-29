#include <iostream>

bool is_han(int num)
{
	int prev, diff;
	prev = num % 10;
	num /= 10;
	if (num <= 0) return true;
	diff = num % 10 - prev;
	prev = num % 10;
	num /= 10;
	while (num > 0)
	{
		if (num % 10 - prev != diff) return false;
		prev = num % 10;
		num /= 10;
	}
	return true;
}

int main()
{
	int n, result = 0;
	std::cin >> n;

	for (int i = 1; i <= n; i++) if (is_han(i)) result++;
	std::cout << result;
}