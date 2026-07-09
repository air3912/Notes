#include <iostream>       
using namespace std;

class EBase {
//EX1：添加 virtual 比较输出不同 
public: void what() { cout << "base" << endl;};
};

class EDrived:public EBase {
public: void what() { cout << "EDrived" << endl; };
};

int main() {
  try {
    throw EDrived();
  }
  //注意：捕获的次序，子类必须在前面 
  catch (EBase& e) { e.what();}
  catch (EDrived& e) { e.what();}
  return 0;
}
