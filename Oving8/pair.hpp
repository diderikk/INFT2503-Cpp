#include <iostream>

using namespace std;

template <typename T1, typename T2>
class Pair
{
	T1 first;
	T2 second;
public:
	Pair(T1 first_, T2 second_): first(first_), second(second_) {};

	Pair operator+(const Pair &other) const{
		Pair pair = *this;
		pair.first += other.first;
		pair.second += other.second;
		return pair;
	};	

	bool operator>(const Pair &other) const{
		return (this->first + this->second) > (other.first + other.second);
	};

	friend ostream &operator<<(ostream &os, const Pair &pair){
		os << pair.first << ", " << pair.second;
		return os;
	}

};