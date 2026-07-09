#include<bits/stdc++.h>
using namespace std;

class GreaterThan {
    int baseline;
public:
    GreaterThan(int x):baseline(x) {}
    bool operator () (const int& x) {
        return x>baseline;
    }
};

bool GreaterThan10(const int& x)   {
    return x>10;
}
bool GreaterThan20(const int& x)   {
    return x>20;
}

int main()  {
    vector<int> a={5,10,15,20,25};
    // find_id return a iterator
    cout<<*find_if(a.begin(),a.end(),GreaterThan(10))<<endl;
    cout<<*find_if(a.begin(),a.end(),GreaterThan(20))<<endl;
    
    cout<<*find_if(a.begin(),a.end(),GreaterThan10)<<endl;
    cout<<*find_if(a.begin(),a.end(),GreaterThan20)<<endl;
    return 0;
}



