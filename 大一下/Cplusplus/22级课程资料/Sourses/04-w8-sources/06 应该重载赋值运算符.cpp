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
    IntArray& operator = (const IntArray& A)    {
        delete[] a;
        n=A.n;
        a=new int[n];
        memcpy(a,A.a,sizeof(int)*n);
        return *this;
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
    b=a; // deep copy is good
    b.print();
    for (int i=0;i<4;++i) a[i]=-i;
    a.print();
    b.print(); // would be different from a
    //a.~IntArray();
    b.print(); // nothing happend
    return 0;
}



