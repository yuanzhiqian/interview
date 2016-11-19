#include <iostream>
#include <string>

using namespace std;

class A {
 public:
  A() {
    init();
    //evil();
  }

  void init() {
    evil();
  }

  virtual void evil() = 0; 
};

class EA : public A {
 public:
  virtual void evil() {}; 

};

int main() {
  EA ea;

  return 0;
}
