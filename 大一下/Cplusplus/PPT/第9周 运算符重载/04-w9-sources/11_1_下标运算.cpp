#include<bits/stdc++.h>
using namespace std;

class IntArray  {
    int *a; 
    int n;
public:
    IntArray(int n=1):n(n)  {
        a=new int[n];
        for (int i=0;i<n;++i) a[i]=i; 
    }
    IntArray(const IntArray& other) {
        n=other.n;
        a=new int[n];
        memcpy(a,other.a,sizeof(int)*n);            
    }
    ~IntArray() {
        cout << "release p=" << a <<endl;
        delete[] a;
    }
    
    
    int& operator[](int i) {
        if (i>=0 && i < n) {
            return a[i];
        }
        throw std::out_of_range("out of range");
    } 
    
    const int& operator[](int i) const{
        if (i>=0 && i < n) {
            return a[i];
        }
        throw std::out_of_range("out of range");
    }   
    
    void print() const {
        for (int i=0;i<n;++i) cout<<a[i]<<" ";
        cout<<endl;
    }
};

int main()  {
    IntArray a(4);
    for (int i=0;i<4;i++) a[i]=i+1;
    a.print();
    
    //任务1：以下两个语句，b的哪些成员函数被调用 
    const IntArray b=a;
    cout << "b[0] = " << b[0] <<endl;
    
    //任务2：print函数去除 const会如何？ 
    b.print();
    
    //任务3:以下语句错误性质一样吗？ 
    //b[5]=10;
    a[5]=10;

    return 0;
}



