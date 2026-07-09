#include <iostream>
#include <vector>
#include <algorithm>

// count_if.cpp compile with -std=c++20
int main() {
  using namespace std;

  vector<int> vec = { 1, 10, 20, 15, 30 };

  auto greater_then_20 = 
    count_if(vec.begin(), vec.end(), [](int i) { return i > 20; });
  auto greater_then_15 = 
    count_if(vec.begin(), vec.end(), [](int i) { return i > 15; });
  
  cout <<  greater_then_20 << "\n"
  	<<  greater_then_15 << "\n";
  	
}
