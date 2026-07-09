#include <bits/stdc++.h>
using namespace std;

int main() {
    int* p1;     
    int* p2;

    p1 = new int;   
    p2 = p1;

    *p1  = 10;
    cout << *p2 << endl;

    delete p1;      //将使p1r和p2同时失效

    cout << *p1;    //错误, p1已失效
    cout << *p2;    //错误, p2也已失效

    delete p2;       //错误，不能再次释放                    
}

