/* str-method-substr.cpp */
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Sysu-Computer";
    cout << s.substr(0,4) << " ";
    if (s.compare(5,8,"Computer")==0) {
        cout << "OK!" << endl;  
    } 
    return 0;
}
