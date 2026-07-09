#include<bits/stdc++.h>
using namespace std;

class GreaterThan {
    int baseline;
public:
    GreaterThan(int x):baseline(x) { }
    bool operator () (const int& x) {
        return x>baseline;
    }
};

int main()  {
    GreaterThan g1(10), g2(20);
    cout << g1(15) << endl;
    cout << g2(15) << endl;
    return 0;
}



