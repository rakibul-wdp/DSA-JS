#include <iostream>
using namespace std;

// base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.";
    }
};

// derived class (child)
class MyChild: public MyClass {
};

// derived class (grandchild)
class MyGrandChild: public MyChild {
};

int
main()
{
  MyGrandChild myObj;
  myObj.myFunction();

  return 0;
}