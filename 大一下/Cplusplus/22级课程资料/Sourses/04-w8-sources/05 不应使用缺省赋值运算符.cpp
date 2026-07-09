#include<bits/stdc++.h>
using namespace std;

class IntArray  {
    int *a, n;
public:
    IntArray(int n=1):n(n)  {
        a=new int[n];
    }
    ~IntArray() {
        delete[] a;
    }
    int& operator [] (const int& i) {
        assert(0<=i&&i<n);
        return a[i];
    }
    void print()    {
        for (int i=0;i<n;++i)
            cout<<a[i]<<" ";
        cout<<endl;
    }
};

int main()  {
    IntArray a(4), b;
    for (int i=0;i<4;++i) a[i]=i;
    a.print();
    b=a; // default operator = is ok, but not recommended
    b.print();
    for (int i=0;i<4;++i) a[i]=-i;
    a.print();
    b.print(); // would be same with a
    a.~IntArray();
    b.print(); // undefined behavior, may cause segmentation fault
    return 0;
}



