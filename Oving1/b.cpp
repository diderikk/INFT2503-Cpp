#include <iostream>
#include <fstream>

using namespace std;


void read_temperatures(double temperatures[], int length);

int main(void) {
	const int length = 5;
	double temperatures[length];

	int less_10 = 0;
	int between_10_and_20 = 0;
	int over_20 = 0;

	read_temperatures(temperatures, length);


	for(int i = 0; i < length; i++) {
		cout << "Temperatur nr " << i+1 << ": " << temperatures[i] << endl;

		if(temperatures[i] < 10) less_10++;
		else if(temperatures[i] >= 10 && temperatures[i] <= 20) between_10_and_20++;
		else over_20++;
	}

	cout << "Antall under 10 er " << less_10 << endl;
	cout << "Antall mellom 10 og 20 er " << between_10_and_20 << endl;
	cout << "Antall over 20 er " << over_20 << endl;

	return 0;
}

void read_temperatures(double temperatures[], int length) {
	ifstream file ("./temperatures");

	if(!file.is_open()){
		cerr << "Could not open file" << endl;
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < length; i++) {
		double temp;
		file >> temp;
		temperatures[i] = temp;
	}
}