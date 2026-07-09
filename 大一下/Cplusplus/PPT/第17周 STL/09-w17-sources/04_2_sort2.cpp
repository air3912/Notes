#include <iostream>
#include <vector>
#include <algorithm>

// sort2.cpp, compile with -std=c++20
int main() {
  using namespace std;

  vector<int> vec = { 13219, 1203, 3213, 4132 };
  sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });

  for (auto i : vec) {
    std::cout << i << " "; 
  }
}
