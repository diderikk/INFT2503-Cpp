#pragma once

#include <string>
#include <iostream>

#define MVA 1.25

using namespace std;

class Commodity
{
	string name;
	long id;
	double price;

	public:
		Commodity(const string &name_, long id_, double price_);
		const string &get_name() const;
		long get_id() const;
		double get_price(double quantity = 1) const;
		void set_price(double price_);
		double get_price_with_sales_tax(double quantity) const;
		friend ostream &operator<<(ostream &os, const Commodity &commodity);
};

Commodity::Commodity(const string &name_, long id_, double price_) : name(name_), id(id_), price(price_) {};

const string &Commodity::get_name() const{
	return name;
};

long Commodity::get_id() const{
	return id;
};

double Commodity::get_price(double quantity) const{
	return price * quantity;
};

void Commodity::set_price(double price_){
	price = price_;
}

double Commodity::get_price_with_sales_tax(double quantity) const{
	return price*quantity*MVA;
};

ostream &operator<<(ostream &os, const Commodity &commodity){
	os << "Varenavn: " << commodity.get_name() << ", varenr: " << commodity.get_id() << " Pris pr enhet: " << commodity.get_price();
	return os;
};

