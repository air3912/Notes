#include<iostream>
using namespace std;

void inc(int *p, int Length) {
    for (int i = 0; i < Length; i++)
        p[i]++;
}

int main() {
    int *p;
    int Length, i;

    cout << "Enter the lenght you want: ";
    cin >> Length;
    p = new int[Length]{1,3,5};  

    inc(p, Length);

    for (i = 0 ; i < Length; i++)
        cout << *(p+i) << " ";

    delete []p;
}


