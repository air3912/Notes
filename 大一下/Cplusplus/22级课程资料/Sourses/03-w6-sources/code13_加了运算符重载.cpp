#include <bits/stdc++.h>
using namespace std;

class NAME {
   public:
    NAME();
    NAME(NAME& other);
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
NAME::NAME(NAME& other) {
    cout << "Copy Constructing.\n";
    if (other.str == NULL) {
        str = NULL;
        return;
    }
    str = new char[strlen(other.str) + 1];
    if (str != NULL)
        strcpy(str, other.str);
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
    NAME obj;            //鈶?
    char temp_str[250];  //鈶?
    cout << "Input your name: ";
    cin >> temp_str;
    obj.set(temp_str);  //鈶?
    return obj;         //鈶?
}  //鈶?


NAME& NAME::operator=(const NAME& other)
{	
      if (other.str == NULL)
      {	str=NULL;
	return *this;
       }

      if (str!=NULL)   delete []str;

      str=new char[strlen(other.str)+1];
      if (str!=NULL)   strcpy(str, other.str);
      
      return *this; /*若函数的返回值类型为NAME，则此语句会引起
                                 对拷贝构造函数的调用;若函数的返回值类型为
                                 NAME&，则不调用拷贝构造函数*/
}





int main() {
    NAME myname;
    myname = get_name();
    myname.show();
}
