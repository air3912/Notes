/* string-ops.cpp */
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1="hello ",s2,s3;
    cin >> s2;
    s3 = s1 + s2;
    cout << s3 << endl;
    
    s1 += {'s','y','s','u'}; //没\0 
    cout << s1 << endl;
    //请自己编程测试其他运算     
    return 0;
}
 
