/* str-method-find.cpp */
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "sysu-computer";
    int pos = s.find("computer");
    s.replace(pos,8,"software");
    cout << s << endl;
    return 0;
}
