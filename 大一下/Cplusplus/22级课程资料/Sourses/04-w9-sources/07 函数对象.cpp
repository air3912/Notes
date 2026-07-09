#include<bits/stdc++.h>
using namespace std;

class cmp {
public:
    bool operator () (const int& a, const int& b)   {
        return a<b;
    }
};

int main()  {
    cmp f;
    cout<<f(1,2)<<endl;
    cout<<f(2,1)<<endl;
    return 0;
}



