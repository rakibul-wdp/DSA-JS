#include <iostream>
using namespace std;

class MyClass { // the class
  public: // access specifier
    int myNum; // attribute (int variable)
    string myString; // attribute (string variable)
};

int main() {
  MyClass myObj; // create an object of MyClass

  // access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;

  return 0;
}