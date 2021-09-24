#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Set
{
	bool number_exists(int integer) const;

public:
	vector<int> table;
	Set();
	Set &operator<<(const Set &other);
	Set &operator+=(int integer);
	Set &operator=(const Set &set);
	friend ostream &operator<<(ostream &os, const Set &set);
};

Set::Set(){}

Set &Set::operator<<(const Set &other) {
	for(int integer : other.table) *this+=integer;
	return *this;
}

bool Set::number_exists(int integer) const{
	for(int table_integer : table) {
		if(table_integer == integer) return true;
	}
	return false;
};

Set &Set::operator+=(int integer){
	if(!number_exists(integer)) table.push_back(integer);
	// table.push_back(integer);
	return *this;
};

Set &Set::operator=(const Set &set){
	table = set.table;
	return *this;
};

ostream &operator<<(ostream &os, const Set &set){
	os << "{ ";
	for(int i = 0; i < set.table.size() - 1; i++ ) os << set.table[i] << ", ";
	os << set.table[set.table.size()-1];
	os << " }";

	return os;
};

