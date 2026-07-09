// invalid_argument example
#include <iostream>       // std::cerr
#include <stdexcept>      // std::invalid_argument
#include <cmath>

double mySqrt(double dnum)
{
    if (dnum < 0)
        throw std::invalid_argument("argument dnum must be great than zero");
    return std::sqrt(dnum); //对合法参数进行处理
}

int main() {
    try {
        mySqrt(-1);
    }
    catch (std::exception& e) {
        std::cout << e.what() << '\n';
    }
    return 0;
}
