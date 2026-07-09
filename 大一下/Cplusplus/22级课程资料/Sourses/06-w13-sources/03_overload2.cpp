#include <iostream>

using std::cout;

int abs(int x) {	// 整数类型数据的绝对值函数
    cout << "Using integer version of abs().\n";
    return (x >= 0 ? x : -x);
}

double abs(double x) {	// 浮点类型数据的绝对值函数
    cout << "Using floating-point version of abs().\n";
    return (x >= 0.0 ? x : -x);
}

int main() {    
    cout << abs(-5) << "\n";	// 调用abs()的整数版本
    cout << abs(3.14) << "\n";	// 调用abs()的浮点版本
    return 0;
}
