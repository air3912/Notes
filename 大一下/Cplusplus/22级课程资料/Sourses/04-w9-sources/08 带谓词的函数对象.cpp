#include<bits/stdc++.h>
using namespace std;

class GreaterThan {
    int baseline;
public:
    GreaterThan(int x):baseline(x)  {
    }
    bool operator () (const int& x)   {
        return x>baseline;
    }
};

int main()  {
    GreaterThan G1(10), G2(20);
    cout<<G1(15)<<endl;
    cout<<G2(15)<<endl;
    return 0;
}



