/* iostream-format.cpp */
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double myFloat=123.4578;
    int myInt=5;
    
    cout << fixed << showpoint << setprecision(3);
    
    cout << setw(10) << left << "Float";
    cout << setw(12) << right << myFloat << endl;
    cout << setw(10) << left << "Int";
    cout << setw(12) << right << myInt << endl;    
     
    return 0;
}

