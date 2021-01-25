#include <iostream>

using namespace std;

int main()
{
	int occ[10];
	for (int i = 0; i < 10; i++) occ[i] = 0;

	int a, b, c, result;
	cin >> a >> b >> c;

	result = a * b * c;

	while (result > 0)
	{
		occ[result % 10]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) cout << occ[i] << endl;
}