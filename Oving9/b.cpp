#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table)
{
	for (auto &e : table)
		out << e << " ";
	return out;
}

int main(void)
{
	vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
	cout << "v1: " << v1 << endl;

	vector<int> v2 = {2, 3, 12, 14, 24};
	cout << "v2: " << v2 << endl;

	if (equal(v1.begin(), v1.begin() + 5, v2.data(), [](int a, int b)
			  { return abs(a - b) <= 2; }))
	{
		cout << "Approximately equal" << endl;
	}
	else cout << "Not approximately equal" << endl;

	if (equal(v1.begin(), v1.begin() + 4, v2.data(), [](int a, int b)
			  { return abs(a - b) <= 2; }))
	{
		cout << "Approximately equal" << endl;
	}
	else cout << "Not approximately equal" << endl;
}