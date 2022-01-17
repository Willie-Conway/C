// Willie Conway
// This program concatenate firstName and
// lastName by using the string datatype
// to create fullName

#include <iostream>
#include <string>
using namespace std;

int main () {
  string firstName = "John ";
  string lastName = "Doe";
//string fullName = firstName + " " + lastName;
//string fullName = firstName.append(lastName);
  string fullName = firstName + lastName;
  cout << fullName;
  return 0;
}
