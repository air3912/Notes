// std::iterator example
#include <iostream>     // std::cout

template <typename T>		//template-reverse-it.cpp 
class ReverseIterator {
  T* p;
public:
  ReverseIterator(T* x) :p(x) {}
  ReverseIterator(const ReverseIterator& mit) : p(mit.p) {}
  ReverseIterator& operator++() {--p;return *this;}
  ReverseIterator operator++(int) {ReverseIterator tmp(*this); operator++(); return tmp;}
  bool operator==(const ReverseIterator& rhs) const {return p==rhs.p;}
  bool operator!=(const ReverseIterator& rhs) const {return p!=rhs.p;}
  T& operator*() {return *p;}
};

int main () {
  int numbers[]={1,2,3,4,5};
  ReverseIterator<int> from(numbers+4),until(numbers+1);
  //auto from(numbers+4) ,until(numbers+1);
  for (auto it=from; it!=until; it++)
    std::cout << *it << ',';
  std::cout << '\n';
  return 0;
}
