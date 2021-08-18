#include <iostream>

using namespace std;

int main(void)
{
	double number;
	double *p = &number;
	double &ref = number;

	// 1:
	number = 1.0;

	cout << number << endl;

	// 2:
	*p = 2.0;

	cout << number << endl;

	// 3:
	ref = 3.0;

	cout << number << endl;

	return 0;
}