#include "set.hpp"
#include <iostream>

int main(void){
	Set set1;
	set1+=1;
	set1+=2;
	set1+=2;
	cout << "Set1 = " << set1 << endl;

	Set set2;
	set2 += 3;
	set2 += 1;
	cout << "Set2 = " << set2 << endl;

	set2<<set1;
	cout << "After union = " << set2 << endl;

	auto set4 = set2;
	cout << "Set4 = " << set4 << endl;


	return 0;
}