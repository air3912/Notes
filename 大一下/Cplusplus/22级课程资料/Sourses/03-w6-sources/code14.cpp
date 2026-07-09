#include <bits/stdc++.h>
using namespace std;

class NAME {
   public:
    NAME();
    ~NAME();
    void show();
    void set(char* s);
    NAME& operator=(const NAME& other);

   private:
    char* str;
};

NAME::NAME() {
    str = NULL;
    cout << "Constructing.\n";
}
NAME& NAME::operator=(const NAME& other) {
	cout << "= operator.\n";
    if (other.str == NULL) {
        str = NULL;
        return *this;
    }

    if (str != NULL)
        delete[] str;

    str = new char[strlen(other.str) + 1];
    if (str != NULL)
        strcpy(str, other.str);

    return *this;
}

NAME::~NAME() {
    cout << "Destructing.\n";
    if (str != NULL)
        delete[] str;
}

void NAME::show() {
    cout << str << "\n";
}

void NAME::set(char* s) {
    if (str != NULL)
        delete[] str;

    str = new char[strlen(s) + 1];

    if (str != NULL)
        strcpy(str, s);
}

NAME get_name() {
    NAME obj;            //¢Ù
    char temp_str[250];  //¢Ú
    cout << "Input your name: ";
    cin >> temp_str;
    obj.set(temp_str);  //¢Û
    return obj;         //¢Ü
}  //¢Ý

int main() {
    NAME myname;
    myname = get_name();
    myname.show();
}
