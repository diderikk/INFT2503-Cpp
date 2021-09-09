#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

template <typename T>
bool equal(T a, T b){
	cout << "Generic" << endl;
	return a == b;
}

bool equal(double a, double b){
	double TOL = 0.00001;
	cout << setprecision(6) << "Specialized: " << " a: " << a << " b: " << b << endl;
	return abs(a-b) < TOL;
}


int main(void){
	cout << "String: " << equal("abc", "abc") << endl;
	cout << "Integer: " << equal(1, 2) << endl;
	cout << "Double: " << equal(0.5122456, 0.5123456) << endl;
	cout << "Double: " << equal(0.5123456, 0.5123456) << endl;
	return 0;
}