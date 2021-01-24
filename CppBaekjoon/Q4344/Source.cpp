#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int c, n, stdcount;
	double* scores;
	double avg;
	double* percentages;
	int aboveavgs;

	cin >> c;
	percentages = new double[c];

	for (int i = 0; i < c; i++)
	{
		cin >> stdcount;
		scores = new double[stdcount];
		avg = 0.;
		for (int j = 0; j < stdcount; j++)
		{
			cin >> scores[j];
			avg += scores[j];
		}
		avg /= stdcount;
		aboveavgs = 0;
		for (int j = 0; j < stdcount; j++)
		{
			if(scores[j] > avg) aboveavgs++;
		}
		percentages[i] = aboveavgs / (double)stdcount * 100;
		delete[] scores;
	}

	cout << fixed << setprecision(3);

	for (int i = 0; i < c; i++)
	{
		cout << percentages[i] << '%' << endl;
	}
}