// List the compilation errors this code may cause

#include <iostream>
#include <string>

using namespace std;

class A {
public:
 A(string &str)
  :m_str(str) {
 }

 string &m_str;
};

class B {
 private:
  B() {
 }
};

class EB : public B {

};

int main() {
  string str = "abc";
  string str1 = "abcd";
  A a(str);
  A a1(str1);
  A a2(a);
  a1 = a;

  cout << a.m_str << endl;
  cout << a1.m_str << endl;
  cout << a2.m_str << endl;

  EB eb;

  return 0;
}
