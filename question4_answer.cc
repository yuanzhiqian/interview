#include <iostream>
#include <string>

using namespace std;

class T {
 public:
  T()
    : text("hello world") {
  }

  const char& operator[] (std::size_t position) const {
    // a lot of tasks...
    // 
    //

    return text[position];
  }

  char& operator[] (std::size_t position) {
    return const_cast<char &> (
      static_cast<const T &>(*this)[position]
    );
  }

 private:
  std::string text;
};

int main() {
  T t;
  const T ct;

  cout << t[3] << endl;
  cout << ct[3] << endl;

  return 0;
}
