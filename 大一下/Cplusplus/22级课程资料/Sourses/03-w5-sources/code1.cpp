#include<iostream>
using namespace std;

int main() {
    int *p;
    p = new int;

    cout << "Please enter an integer value: ";
    cin >> *p;
    cout << "The value you enter is: " << *p;

    delete p;
}


