/* str-method-insert.cpp */
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "ysu";
    s.insert(0,1,'S').append(1,'-').append("Xcomputer");
    s.erase(5,1);
    cout << s << endl;
    return 0;
}
