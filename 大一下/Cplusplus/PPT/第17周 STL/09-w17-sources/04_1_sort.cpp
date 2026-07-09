#include <iostream>
#include <vector>
#include <algorithm>

// sort.cpp, compile with -std=c++11
int main() {
  using namespace std;

  //vector vec = { 13219, 1203, 3213, 4132 }; // c++20 支持类模板推导 
  vector<int> vec = { 13219, 1203, 3213, 4132 };
  sort(vec.begin(), vec.end());

  for (auto i : vec) {
    std::cout << i << " "; 
  }
}
