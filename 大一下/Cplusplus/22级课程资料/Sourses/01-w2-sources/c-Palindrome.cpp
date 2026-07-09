/* c-plindrome.cpp */
#include<iostream>
#include<string>
#include<cctype>
#include<cassert>

using namespace std;

namespace sysu {
    string low_alpha(const string& str);
    bool test_palindrome(const string& str);
}

int main() {
    using sysu::low_alpha;
    string s;
    getline(cin,s);
    s = low_alpha(s);
    assert(s[0] == s[s.length()-1]);
    cout << s;
    return 0;
}

string sysu::low_alpha(const string& str) {
    string s;
    int len = str.length();
    for (int i=0; i<len ;i++) {
        if (isalpha(str[i])) {
            s.append(1,tolower(str[i]));
        }
    }
    return s;
}
