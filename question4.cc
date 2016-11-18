#include <iostream>
#include <string>

using namespace std;

class T {
 public:
  T()
    : text("hello world") {
  }

  const char& operator[] (std::size_t position) const {
    return static_cast<const char &> (
      const_cast<T &>(*this)[position]
    );
  }

  char& operator[] (std::size_t position) {
    // a lot of tasks...
    // 
    //

    return text[position];
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
