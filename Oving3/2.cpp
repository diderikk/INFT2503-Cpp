#include <iostream>
#include "1.hpp"
using namespace std;

int main() {
  Circle circle(5);

  auto area = circle.get_area();
  cout << "Arealet er lik " << area << endl;

  double circumference = circle.get_circumference();
  cout << "Omkretsen er lik " << circumference << endl;

  return 0;
}