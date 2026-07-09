#include<iostream>

int main() {
    auto f1 = []{return "hello lambda!";};
    std::cout << f1() << std::endl;
    
    int i = 3;
    auto f2 = [&i](int a){i++; return a+i;};
    std::cout << i << "-" << f2(5) << std::endl; 
}
