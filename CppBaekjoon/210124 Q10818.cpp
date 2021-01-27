#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int *integers = new int[n];

	for (int i = 0; i < n; i++) cin >> integers[i];

	int min = integers[0], max = integers[0];
	
	for (int i = 1; i < n; i++)
	{
		if (integers[i] > max) max = integers[i];
		if (integers[i] < min) min = integers[i];
	}

	cout << min << ' ' << max;

	delete[] integers;
}