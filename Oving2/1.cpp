#include <iostream>

using namespace std;

int main(void)
{
	int i = 3;
	int j = 5;
	int *p = &i;
	int *q = &j;

	cout << "i: Addresse: " << &i << " Verdi: " << i << endl;
	cout << "p: Addresse: " << p << " Verdi: " << *p << endl;
	cout << "j: Addresse: " << &j << " Verdi: " << j << endl;
	cout << "q: Addresse: " << q << " Verdi: " << *q << endl;

	*p = 7;
	*q += 4;
	*q = *p + 1;
	p = q;
	// Skal skrive ut 8 8, forklart i Øving2.md
	cout << *p << " " << *q << endl;

	return 0;
}