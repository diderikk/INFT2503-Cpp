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


	auto pos = find_if(v1.begin(), v1.end(), [](int num){
		return num > 15;
	});

	if(pos != v1.end()) cout << "Value greater than 15 in v1\nIndex: " << (pos - v1.begin()) << "\nValue: " << *pos << endl;
}