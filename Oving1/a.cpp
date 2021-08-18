#include <iostream>

using namespace std;

int main(void)
{
	const int length = 5;
	int less_10 = 0;
	int between_10_and_20 = 0;
	int over_20 = 0;

	cout << "Du skal skrive inn " << length << " temperaturer." << endl;

	for (int i = 0; i < 5; i++)
	{
		double input_temp;
		cout << "Temperatur nr " << i + 1 << ": " << flush;
		cin >> input_temp;

		if (input_temp < 10)
			less_10++;
		else if (input_temp >= 10 && input_temp <= 20)
			between_10_and_20++;
		else
			over_20++;
	}

	cout << "Antall under 10 er " << less_10 << endl;
	cout << "Antall mellom 10 og 20 er " << between_10_and_20 << endl;
	cout << "Antall over 20 er " << over_20 << endl;
	return 0;
}