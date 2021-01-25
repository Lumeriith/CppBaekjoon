#include <iostream>
#define N 10000

using namespace std;

int d(int n);

int main()
{
	bool isselfnum[N];
	
	for (int i = 0; i < N; i++) isselfnum[i] = true;

	int result;

	for (int i = 1; i <= N; i++)
	{
		result = d(i);
		if (result > 0 && result <= N)
		{
			isselfnum[result - 1] = false;
		}
	}

	for (int i = 0; i < N; i++) if (isselfnum[i]) cout << i + 1 << endl;
}

int d(int n)
{
	int result = n;
	while (n > 0)
	{
		result += n % 10;
		n /= 10;
	}
	return result;
}