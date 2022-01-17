// Willie Conway
// C++ Constants
// When you do not want others (or yourself) to override
// existing variable values, use the const keyword
// (this will declare the variable
// as "constant", which means unchangeable and read-only)

#include <iostream>
using namespace std;

int main() {
  const int minutesPerHour = 60; // minutesPerHour will always be 60
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;
  return 0;
}
