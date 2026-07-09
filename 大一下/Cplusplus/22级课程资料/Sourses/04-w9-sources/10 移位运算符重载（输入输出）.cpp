#include<bits/stdc++.h>
using namespace std;

struct Integer {
    int x;
};

istream& operator >> (istream& is,Integer& Int) {
    is>>Int.x;
    return is;
}

ostream& operator << (ostream& os,const Integer& Int) {
    os<<Int.x;
    return os;
}

int main()  {
    Integer x;
    cin>>x;
    cout<<x<<endl;
    return 0;
}



