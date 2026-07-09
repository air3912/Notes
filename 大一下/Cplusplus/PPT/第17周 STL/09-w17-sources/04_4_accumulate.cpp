#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// accumulate.cpp, compile with -std=c++11/20
int main() {
  using namespace std;
  //vector v = { 1, 2, 3, 4 };
  vector<int> v = { 1, 2, 3, 4 };
  //auto res = accumulate(v.begin(), v.end(), 1, [](auto i, auto j) { return i * j; });
  auto res = accumulate(v.begin(), v.end(), 1, [](decltype(v[0]) i, decltype(v[0]) j) { return i * j; });
  cout << res;
}
