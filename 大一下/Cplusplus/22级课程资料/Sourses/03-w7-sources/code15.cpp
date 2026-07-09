#include<iostream>
using namespace std;

void swap_pass_by_reference(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}
void swap_pass_by_value(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main() {
    int a = 1, b = 2;
    cout << "originally" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    swap_pass_by_reference(a, b);
    cout << "after swap_pass_by_reference" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    swap_pass_by_value(&a, &b);
    cout << "after swap_pass_by_value" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    return 0;
}
