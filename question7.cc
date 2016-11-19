// What is the output and why?

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

  virtual void evil() {
    cout << "Satan" << endl;
  }; 
};

class EA : public A {
 public:
  virtual void evil() {
    cout << "Lucifer" << endl;
  }; 

};

int main() {
  EA ea;

  return 0;
}
