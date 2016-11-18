//What shall this program output? And why?

#include <iostream>

using namespace std;

class A {
 public:
  A() {
    cout << "A created" << endl; 
  }
 
  int i;
};

class B {
 public:
  static A a;
};

A B::a;

int main() {
  A a1 = B::a; 

  return 0;
}
