#include <stdexcept>
#include <iostream>
using namespace std;

class Divided_By_Zero:public runtime_error{
public:
  explicit Divided_By_Zero(const string& s = "Divide By Zero"):runtime_error(s){};
  explicit Divided_By_Zero(const char* s):runtime_error(string(s)){};
};

int main() {
  double a = 10, b = 0, res;
  char Operator = '/';
  try {
    if (b == 0) throw Divided_By_Zero();
    res = a / b;
    cout << a << " / " << b << " = " << res;
  }
  catch(const exception& e) {
    cout << e.what() << endl;
  }
  return 0;
}
