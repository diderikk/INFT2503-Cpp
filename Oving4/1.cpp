#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	vector<double> vec {1,2,3,4,5};
	cout << vec.front() << " " << vec.back() << endl;

	vec.emplace(vec.begin() + 1, 6);

	cout << "First element: " << vec.front() << endl;
	cout << "Second element: " << vec[1] << endl;

	auto it = find(vec.begin(), vec.end(), 6);
	
	if(it != vec.end()) cout << "Value found: " << *it << endl;
	
	return 0;
}